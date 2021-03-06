/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Manifold
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Collision/b2Collision.h"


/** Set attributes (key, value)
 * 
 */
static int b2Manifold__set_(lua_State *L) {

  b2Manifold *self = *((b2Manifold **)dub_checksdata_n(L, 1, "b2.Manifold"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 9);
  switch(key_h) {
    case 3: {
      if (DUB_ASSERT_KEY(key, "localNormal")) break;
      self->localNormal = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "localPoint")) break;
      self->localPoint = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "type")) break;
      self->type = (b2Manifold::Type)luaL_checkint(L, 3);
      return 0;
    }
    case 7: {
      if (DUB_ASSERT_KEY(key, "pointCount")) break;
      self->pointCount = luaL_checkint(L, 3);
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
static int b2Manifold__get_(lua_State *L) {

  b2Manifold *self = *((b2Manifold **)dub_checksdata_n(L, 1, "b2.Manifold", true));
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
  int key_h = dub_hash(key, 9);
  switch(key_h) {
    case 3: {
      if (DUB_ASSERT_KEY(key, "localNormal")) break;
      dub_pushudata(L, &self->localNormal, "b2.Vec2", false);
      return 1;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "localPoint")) break;
      dub_pushudata(L, &self->localPoint, "b2.Vec2", false);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "type")) break;
      lua_pushnumber(L, self->type);
      return 1;
    }
    case 7: {
      if (DUB_ASSERT_KEY(key, "pointCount")) break;
      lua_pushnumber(L, self->pointCount);
      return 1;
    }
  }
  return 0;
}

/** b2Manifold()
 * 
 */
static int b2Manifold_b2Manifold(lua_State *L) {
  try {
    b2Manifold *retval__ = new b2Manifold();
    dub_pushudata(L, retval__, "b2.Manifold", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2Manifold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2Manifold: Unknown exception");
  }
  return dub_error(L);
}

/** Read points(size_t i)
 * 
 */
static int b2Manifold_points(lua_State *L) {
  try {
    b2Manifold *self = *((b2Manifold **)dub_checksdata(L, 1, "b2.Manifold"));
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      size_t i = dub_checkint(L, 2);
      b2ManifoldPoint *v = *((b2ManifoldPoint **)dub_checksdata(L, 3, "b2.ManifoldPoint"));
      if (!i || i > b2_maxManifoldPoints) return 0;
      self->points[i-1] = *v;
      return 0;
    } else {
      size_t i = dub_checkint(L, 2);
      if (!i || i > b2_maxManifoldPoints) return 0;
      dub_pushudata(L, new b2ManifoldPoint(self->points[i-1]), "b2.ManifoldPoint", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "points: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "points: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Manifold___tostring(lua_State *L) {
  b2Manifold *self = *((b2Manifold **)dub_checksdata_n(L, 1, "b2.Manifold"));
  lua_pushfstring(L, "b2.Manifold: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Manifold_member_methods[] = {
  { "__newindex"   , b2Manifold__set_     },
  { "__index"      , b2Manifold__get_     },
  { "new"          , b2Manifold_b2Manifold },
  { "points"       , b2Manifold_points    },
  { "__tostring"   , b2Manifold___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub_const_Reg b2Manifold_const[] = {
  { "e_circles"    , b2Manifold::e_circles },
  { "e_faceA"      , b2Manifold::e_faceA  },
  { "e_faceB"      , b2Manifold::e_faceB  },
  { NULL, 0},
};

extern "C" int luaopen_b2_Manifold(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Manifold");
  // <mt>
  // register class constants
  dub_register_const(L, b2Manifold_const);

  // register member methods
  luaL_register(L, NULL, b2Manifold_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Manifold", "Manifold");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
