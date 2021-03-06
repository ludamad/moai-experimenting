# Top-level cmake file. All settings are inherited by children cmake files.
# Recursively includes all children cmake files using add_subdirectory(...)

cmake_minimum_required(VERSION 2.6)

if ($ENV{BUILD_FLAGS})
    add_definitions ($ENV{BUILD_FLAGS})
endif()

## Compiler flags
if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions("-mfpmath=sse -msse2 -ffp-contract=on")
    add_definitions("-Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions --param=ssp-buffer-size=4 -ggdb3")
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    if ($ENV{BUILD_SANITIZE})
        SET (CMAKE_EXE_LINKER_FLAGS
            -fsanitize=address 
        )
        add_definitions(
           -fsanitize=address 
        )
    endif()
else()
    add_definitions(-DNDEBUG)
    if ($ENV{BUILD_PROF_GEN})
        SET (CMAKE_EXE_LINKER_FLAGS
           -fprofile-generate
        )
        add_definitions(
           -fprofile-generate
        )
    elseif( $ENV{BUILD_PROF_USE})
        SET (CMAKE_EXE_LINKER_FLAGS
           -fprofile-use
        )
        add_definitions(
           -fprofile-use
        )
    endif()
endif()

if(WIN32)
    add_definitions("-DWIN32")
    if(CMAKE_COMPILER_IS_GNUCXX)
        add_definitions("-mwindows")
    endif()
endif()

#add_definitions("-fsanitize=address")
#        SET (CMAKE_EXE_LINKER_FLAGS
#                        -fsanitize=address 
#                                )

# Enable tests
enable_testing()

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/dependencies/bundled/lua-5.1")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/dependencies/bundled/")

add_subdirectory( src ) 
add_subdirectory( dependencies ) 

