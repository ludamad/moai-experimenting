#!/bin/bash

###############################################################################
# Build the various components of the engine.
###############################################################################

set -e # Good practice -- exit completely on any bad exit code

# Navigate to base folder:
cd "`dirname "$0"`"

# Set common variables and shell-script safety settings
source "scripts/common.sh"

BASE_FOLDER="$(pwd)"
BUILD_ROOT="$BASE_FOLDER/builds"

mkdir -p "$BUILD_ROOT"

##############################################################################
# Eclipse options
#   --eclipse/-e: Create eclipse project files. Exits immediately!
###############################################################################

# Create eclipse-project-files
if handle_flag "--eclipse" || handle_flag "-e" ; then

    read -e -p "Where would you like to create Eclispe project files? " ECLIPSE_PATH
    echo "Creating Eclipse project files in \"$ECLIPSE_PATH\" ..." | colorify $LIGHT_BLUE

    if [ ! -e "$ECLIPSE_PATH" ] ; then
        while true; do
            read -p "Path does not exist, create it? " yn
            case $yn in
                [Yy]* ) mkdir -p "$ECLIPSE_PATH" ; break;;
                [Nn]* ) exit;;
                * ) echo "Please answer yes or no.";;
            esac
        done
    fi
 
    cd "$ECLIPSE_PATH"

    # Eclipse project creation
    cmake -G"Eclipse CDT4 - Unix Makefiles" "$BASE_FOLDER"

    echo "Created Eclipse project files in \"$ECLIPSE_PATH\"." | colorify $YELLOW
    exit
fi

###############################################################################
# Handle build flags.
###############################################################################

USE_LUAJIT=TRUE
BUILD_TYPE=Debug
BUILD_LINUX=TRUE
BUILD_WINDOWS=FALSE
CMAKE_COMMAND=cmake
MAKE_COMMAND=make
BUILD_FOLDER="$BUILD_ROOT/native"

if handle_flag "--vanilla-lua" || handle_flag "-vl" ; then
    USE_LUAJIT=FALSE
fi
if handle_flag "--optimize" || handle_flag "-O" ; then
    BUILD_TYPE=Release
fi
if handle_flag "--mingw32" || handle_flag "-M" ; then 
    CMAKE_COMMAND=mingw32-cmake
    MAKE_COMMAND=mingw32-make
    BUILD_FOLDER="$BUILD_ROOT/mingw32"
    BUILD_LINUX=FALSE
    BUILD_WINDOWS=TRUE
fi

###############################################################################
# Download the dependencies if they have not yet been downloaded.
###############################################################################

bash ./scripts/get_dependencies.sh

###############################################################################
# Function to run CMake. Specify configuration settings for MOAI.
###############################################################################

function run_cmake() {
    echo "Configuring build via CMake..." | colorify $LIGHT_BLUE
    "$CMAKE_COMMAND" \
        -DBUILD_LINUX=$BUILD_LINUX \
        -DBUILD_WINDOWS=$BUILD_WINDOWS \
        -DSDL_HOST=TRUE \
        -DMOAI_BOX2D=TRUE \
        -DMOAI_CHIPMUNK=FALSE \
        -DMOAI_CURL=TRUE \
        -DMOAI_CRYPTO=TRUE \
        -DMOAI_EXPAT=TRUE \
        -DMOAI_FREETYPE=TRUE \
        -DMOAI_JSON=TRUE \
        -DMOAI_JPG=TRUE \
        -DMOAI_MONGOOSE=TRUE \
        -DMOAI_LUAEXT=TRUE \
        -DMOAI_OGG=TRUE \
        -DMOAI_OPENSSL=TRUE \
        -DMOAI_SQLITE3=TRUE \
        -DMOAI_TINYXML=TRUE \
        -DMOAI_PNG=TRUE \
        -DMOAI_SFMT=TRUE \
        -DMOAI_VORBIS=TRUE \
        -DMOAI_UNTZ=TRUE \
        -DMOAI_LUAJIT=$USE_LUAJIT \
        -DMOAI_HTTP_CLIENT=TRUE \
        -DCMAKE_BUILD_TYPE=$BUILD_TYPE "$BASE_FOLDER"
    echo "Configured build via CMake." | colorify $YELLOW
}

###############################################################################
# Function to build the engine. 
# Try to detect the number of cores for building with make.
###############################################################################

function build_engine(){
    mkdir -p "$BUILD_FOLDER"
    cd "$BUILD_FOLDER"

    run_cmake
    if handle_flag "--clean" ; then
        "$MAKE_COMMAND" clean
    fi

    # Configure amount of cores used
    if [[ -e /proc/cpuinfo ]] ; then
        cores=$(grep -c ^processor /proc/cpuinfo)
    else
        cores=4 # Guess -- may want to manually edit if above fails.
    fi

    echo "Building via generated Makefile..." | colorify $LIGHT_BLUE
    "$MAKE_COMMAND" -j$((cores+1))
    echo "Built via generated Makefile." | colorify $YELLOW

    # Place the MOAI executable in a convenient location:
    cp "$BUILD_FOLDER/dependencies/external/moai-dev/cmake/host-sdl/moai" "$BUILD_FOLDER/moai"

    cd ..
}

###############################################################################
# Build the engine.
###############################################################################

if handle_flag "--quiet" || handle_flag "-q" ; then
   build_engine > /dev/null
else
   build_engine
fi

