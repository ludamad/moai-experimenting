/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2WeldJointDef
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/Joints/b2WeldJoint.h"


/** ~b2WeldJointDef()
 * 
 */
static int b2WeldJointDef__b2WeldJointDef(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.WeldJointDef"));
    if (userdata->gc) {
      b2WeldJointDef *self = (b2WeldJointDef *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2WeldJointDef: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2WeldJointDef: Unknown exception");
  }
  return dub_error(L);
}

/** Set attributes (key, value)
 * 
 */
static int b2WeldJointDef__set_(lua_State *L) {

  b2WeldJointDef *self = *((b2WeldJointDef **)dub_checksdata_n(L, 1, "b2.WeldJointDef"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 16);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "localAnchorA")) break;
      self->localAnchorA = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "localAnchorB")) break;
      self->localAnchorB = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "referenceAngle")) break;
      self->referenceAngle = luaL_checknumber(L, 3);
      return 0;
    }
    case 14: {
      if (DUB_ASSERT_KEY(key, "frequencyHz")) break;
      self->frequencyHz = luaL_checknumber(L, 3);
      return 0;
    }
    case 9: {
      if (DUB_ASSERT_KEY(key, "dampingRatio")) break;
      self->dampingRatio = luaL_checknumber(L, 3);
      return 0;
    }
    case 10: {
      if (DUB_ASSERT_KEY(key, "type")) break;
      self->type = (b2JointType)luaL_checkint(L, 3);
      return 0;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "userData")) break;
      dub_protect(L, 1, 3, "userData");
      self->userData = *((void **)dub_checksdata_n(L, 3, "void"));
      return 0;
    }
    case 15: {
      if (DUB_ASSERT_KEY(key, "bodyA")) break;
      dub_protect(L, 1, 3, "bodyA");
      self->bodyA = *((b2Body **)dub_checksdata_n(L, 3, "b2.Body"));
      return 0;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "bodyB")) break;
      dub_protect(L, 1, 3, "bodyB");
      self->bodyB = *((b2Body **)dub_checksdata_n(L, 3, "b2.Body"));
      return 0;
    }
    case 11: {
      if (DUB_ASSERT_KEY(key, "collideConnected")) break;
      self->collideConnected = luaL_checkboolean(L, 3);
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
static int b2WeldJointDef__get_(lua_State *L) {

  b2WeldJointDef *self = *((b2WeldJointDef **)dub_checksdata_n(L, 1, "b2.WeldJointDef", true));
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
  int key_h = dub_hash(key, 16);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "localAnchorA")) break;
      dub_pushudata(L, &self->localAnchorA, "b2.Vec2", false);
      return 1;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "localAnchorB")) break;
      dub_pushudata(L, &self->localAnchorB, "b2.Vec2", false);
      return 1;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "referenceAngle")) break;
      lua_pushnumber(L, self->referenceAngle);
      return 1;
    }
    case 14: {
      if (DUB_ASSERT_KEY(key, "frequencyHz")) break;
      lua_pushnumber(L, self->frequencyHz);
      return 1;
    }
    case 9: {
      if (DUB_ASSERT_KEY(key, "dampingRatio")) break;
      lua_pushnumber(L, self->dampingRatio);
      return 1;
    }
    case 10: {
      if (DUB_ASSERT_KEY(key, "type")) break;
      lua_pushnumber(L, self->type);
      return 1;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "userData")) break;
      void *retval__ = self->userData;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "void", false);
      return 1;
    }
    case 15: {
      if (DUB_ASSERT_KEY(key, "bodyA")) break;
      b2Body *retval__ = self->bodyA;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.Body", false);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "bodyB")) break;
      b2Body *retval__ = self->bodyB;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.Body", false);
      return 1;
    }
    case 11: {
      if (DUB_ASSERT_KEY(key, "collideConnected")) break;
      lua_pushboolean(L, self->collideConnected);
      return 1;
    }
  }
  return 0;
}

/** Cast (class_name)
 * 
 */
static int b2WeldJointDef__cast_(lua_State *L) {

  b2WeldJointDef *self = *((b2WeldJointDef **)dub_checksdata_n(L, 1, "b2.WeldJointDef"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "b2.JointDef")) break;
      *retval__ = static_cast<b2JointDef *>(self);
      return 1;
    }
  }
  return 0;
}

/** b2WeldJointDef::b2WeldJointDef()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2WeldJoint.h:30
 */
static int b2WeldJointDef_b2WeldJointDef(lua_State *L) {
  try {
    b2WeldJointDef *retval__ = new b2WeldJointDef();
    dub_pushudata(L, retval__, "b2.WeldJointDef", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2WeldJointDef: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2WeldJointDef: Unknown exception");
  }
  return dub_error(L);
}

/** void b2WeldJointDef::Initialize(b2Body *bodyA, b2Body *bodyB, const b2Vec2 &anchor)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2WeldJoint.h:41
 */
static int b2WeldJointDef_Initialize(lua_State *L) {
  try {
    b2WeldJointDef *self = *((b2WeldJointDef **)dub_checksdata(L, 1, "b2.WeldJointDef"));
    b2Body *bodyA = *((b2Body **)dub_checksdata(L, 2, "b2.Body"));
    b2Body *bodyB = *((b2Body **)dub_checksdata(L, 3, "b2.Body"));
    b2Vec2 *anchor = *((b2Vec2 **)dub_checksdata(L, 4, "b2.Vec2"));
    self->Initialize(bodyA, bodyB, *anchor);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Initialize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Initialize: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2WeldJointDef___tostring(lua_State *L) {
  b2WeldJointDef *self = *((b2WeldJointDef **)dub_checksdata_n(L, 1, "b2.WeldJointDef"));
  lua_pushfstring(L, "b2.WeldJointDef: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2WeldJointDef_member_methods[] = {
  { "__gc"         , b2WeldJointDef__b2WeldJointDef },
  { "__newindex"   , b2WeldJointDef__set_ },
  { "__index"      , b2WeldJointDef__get_ },
  { "_cast_"       , b2WeldJointDef__cast_ },
  { "new"          , b2WeldJointDef_b2WeldJointDef },
  { "Initialize"   , b2WeldJointDef_Initialize },
  { "__tostring"   , b2WeldJointDef___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_WeldJointDef(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.WeldJointDef");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2WeldJointDef_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "WeldJointDef", "WeldJointDef");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
