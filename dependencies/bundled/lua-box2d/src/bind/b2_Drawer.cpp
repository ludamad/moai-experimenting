/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Drawer
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "b2Drawer.h"


/** Cast (class_name)
 * 
 */
static int b2Drawer__cast_(lua_State *L) {

  b2Drawer *self = *((b2Drawer **)dub_checksdata_n(L, 1, "b2.Drawer"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "b2.Draw")) break;
      *retval__ = static_cast<b2Draw *>(self);
      return 1;
    }
  }
  return 0;
}

/** b2Drawer()
 * 
 */
static int b2Drawer_b2Drawer(lua_State *L) {
  try {
    b2Drawer *retval__ = new b2Drawer();
    retval__->pushobject(L, retval__, "b2.Drawer", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2Drawer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2Drawer: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Draw::SetFlags(uint32 flags)
 * vendor/Box2D/Box2D/Common/b2Draw.h:52
 */
static int b2Drawer_SetFlags(lua_State *L) {
  try {
    b2Drawer *self = *((b2Drawer **)dub_checksdata(L, 1, "b2.Drawer"));
    uint32 flags = dub_checkint(L, 2);
    self->SetFlags(flags);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetFlags: Unknown exception");
  }
  return dub_error(L);
}

/** uint32 b2Draw::GetFlags() const
 * vendor/Box2D/Box2D/Common/b2Draw.h:55
 */
static int b2Drawer_GetFlags(lua_State *L) {
  try {
    b2Drawer *self = *((b2Drawer **)dub_checksdata(L, 1, "b2.Drawer"));
    lua_pushnumber(L, self->GetFlags());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetFlags: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Draw::AppendFlags(uint32 flags)
 * vendor/Box2D/Box2D/Common/b2Draw.h:58
 */
static int b2Drawer_AppendFlags(lua_State *L) {
  try {
    b2Drawer *self = *((b2Drawer **)dub_checksdata(L, 1, "b2.Drawer"));
    uint32 flags = dub_checkint(L, 2);
    self->AppendFlags(flags);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "AppendFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "AppendFlags: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Draw::ClearFlags(uint32 flags)
 * vendor/Box2D/Box2D/Common/b2Draw.h:61
 */
static int b2Drawer_ClearFlags(lua_State *L) {
  try {
    b2Drawer *self = *((b2Drawer **)dub_checksdata(L, 1, "b2.Drawer"));
    uint32 flags = dub_checkint(L, 2);
    self->ClearFlags(flags);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "ClearFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "ClearFlags: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Drawer___tostring(lua_State *L) {
  b2Drawer *self = *((b2Drawer **)dub_checksdata_n(L, 1, "b2.Drawer"));
  lua_pushfstring(L, "b2.Drawer: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Drawer_member_methods[] = {
  { "_cast_"       , b2Drawer__cast_      },
  { "new"          , b2Drawer_b2Drawer    },
  { "SetFlags"     , b2Drawer_SetFlags    },
  { "GetFlags"     , b2Drawer_GetFlags    },
  { "AppendFlags"  , b2Drawer_AppendFlags },
  { "ClearFlags"   , b2Drawer_ClearFlags  },
  { "__tostring"   , b2Drawer___tostring  },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_Drawer(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Drawer");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2Drawer_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Drawer", "Drawer");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
