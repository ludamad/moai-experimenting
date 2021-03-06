/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2JointEdge
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/Joints/b2Joint.h"


/** Set attributes (key, value)
 * 
 */
static int b2JointEdge__set_(lua_State *L) {

  b2JointEdge *self = *((b2JointEdge **)dub_checksdata_n(L, 1, "b2.JointEdge"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 6);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "other")) break;
      dub_protect(L, 1, 3, "other");
      self->other = *((b2Body **)dub_checksdata_n(L, 3, "b2.Body"));
      return 0;
    }
    case 4: {
      if (DUB_ASSERT_KEY(key, "joint")) break;
      dub_protect(L, 1, 3, "joint");
      self->joint = *((b2Joint **)dub_checksdata_n(L, 3, "b2.Joint"));
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "prev")) break;
      dub_protect(L, 1, 3, "prev");
      self->prev = *((b2JointEdge **)dub_checksdata_n(L, 3, "b2.JointEdge"));
      return 0;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "next")) break;
      dub_protect(L, 1, 3, "next");
      self->next = *((b2JointEdge **)dub_checksdata_n(L, 3, "b2.JointEdge"));
      return 0;
    }
  }
  if (lua_istable(L, 1)) {
    lua_rawset(L, 1);
  } else {
    luaL_error(L, KEY_EXCEPTION_MSG, key);
  }
  return 0;
}

/** Get attributes (key)
 * 
 */
static int b2JointEdge__get_(lua_State *L) {

  b2JointEdge *self = *((b2JointEdge **)dub_checksdata_n(L, 1, "b2.JointEdge", true));
  const char *key = luaL_checkstring(L, 2);
  // <self> "key" <mt>
  // rawget(mt, key)
  lua_pushvalue(L, 2);
  // <self> "key" <mt> "key"
  lua_rawget(L, -2);
  if (!lua_isnil(L, -1)) {
    // Found method.
    return 1;
  } else {
    // Not in mt = attribute access.
    lua_pop(L, 2);
  }
  int key_h = dub_hash(key, 6);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "other")) break;
      b2Body *retval__ = self->other;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.Body", false);
      return 1;
    }
    case 4: {
      if (DUB_ASSERT_KEY(key, "joint")) break;
      b2Joint *retval__ = self->joint;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.Joint", false);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "prev")) break;
      b2JointEdge *retval__ = self->prev;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.JointEdge", false);
      return 1;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "next")) break;
      b2JointEdge *retval__ = self->next;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.JointEdge", false);
      return 1;
    }
  }
  return 0;
}

/** b2JointEdge()
 * 
 */
static int b2JointEdge_b2JointEdge(lua_State *L) {
  try {
    b2JointEdge *retval__ = new b2JointEdge();
    dub_pushudata(L, retval__, "b2.JointEdge", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2JointEdge: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2JointEdge: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2JointEdge___tostring(lua_State *L) {
  b2JointEdge *self = *((b2JointEdge **)dub_checksdata_n(L, 1, "b2.JointEdge"));
  lua_pushfstring(L, "b2.JointEdge: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2JointEdge_member_methods[] = {
  { "__newindex"   , b2JointEdge__set_    },
  { "__index"      , b2JointEdge__get_    },
  { "new"          , b2JointEdge_b2JointEdge },
  { "__tostring"   , b2JointEdge___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_JointEdge(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.JointEdge");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2JointEdge_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "JointEdge", "JointEdge");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
