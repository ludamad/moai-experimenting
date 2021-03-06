/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2MotorJoint
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/Joints/b2MotorJoint.h"


/** ~b2MotorJoint()
 * 
 */
static int b2MotorJoint__b2MotorJoint(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.MotorJoint"));
    if (userdata->gc) {
      b2MotorJoint *self = (b2MotorJoint *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2MotorJoint: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2MotorJoint: Unknown exception");
  }
  return dub_error(L);
}

/** Cast (class_name)
 * 
 */
static int b2MotorJoint__cast_(lua_State *L) {

  b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata_n(L, 1, "b2.MotorJoint"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "b2.Joint")) break;
      *retval__ = static_cast<b2Joint *>(self);
      return 1;
    }
  }
  return 0;
}

/** b2Vec2 b2MotorJoint::GetAnchorA() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:62
 */
static int b2MotorJoint_GetAnchorA(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    dub_pushudata(L, new b2Vec2(self->GetAnchorA()), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetAnchorA: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetAnchorA: Unknown exception");
  }
  return dub_error(L);
}

/** b2Vec2 b2MotorJoint::GetAnchorB() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:63
 */
static int b2MotorJoint_GetAnchorB(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    dub_pushudata(L, new b2Vec2(self->GetAnchorB()), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetAnchorB: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetAnchorB: Unknown exception");
  }
  return dub_error(L);
}

/** b2Vec2 b2MotorJoint::GetReactionForce(float32 inv_dt) const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:65
 */
static int b2MotorJoint_GetReactionForce(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    float32 inv_dt = dub_checknumber(L, 2);
    dub_pushudata(L, new b2Vec2(self->GetReactionForce(inv_dt)), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetReactionForce: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetReactionForce: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MotorJoint::GetReactionTorque(float32 inv_dt) const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:66
 */
static int b2MotorJoint_GetReactionTorque(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    float32 inv_dt = dub_checknumber(L, 2);
    lua_pushnumber(L, self->GetReactionTorque(inv_dt));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetReactionTorque: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetReactionTorque: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MotorJoint::SetLinearOffset(const b2Vec2 &linearOffset)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:69
 */
static int b2MotorJoint_SetLinearOffset(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    b2Vec2 *linearOffset = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    self->SetLinearOffset(*linearOffset);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetLinearOffset: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetLinearOffset: Unknown exception");
  }
  return dub_error(L);
}

/** const b2Vec2 & b2MotorJoint::GetLinearOffset() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:70
 */
static int b2MotorJoint_GetLinearOffset(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    dub_pushudata(L, const_cast<b2Vec2*>(&self->GetLinearOffset()), "b2.Vec2", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetLinearOffset: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetLinearOffset: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MotorJoint::SetAngularOffset(float32 angularOffset)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:73
 */
static int b2MotorJoint_SetAngularOffset(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    float32 angularOffset = dub_checknumber(L, 2);
    self->SetAngularOffset(angularOffset);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetAngularOffset: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetAngularOffset: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MotorJoint::GetAngularOffset() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:74
 */
static int b2MotorJoint_GetAngularOffset(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    lua_pushnumber(L, self->GetAngularOffset());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetAngularOffset: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetAngularOffset: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MotorJoint::SetMaxForce(float32 force)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:77
 */
static int b2MotorJoint_SetMaxForce(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    float32 force = dub_checknumber(L, 2);
    self->SetMaxForce(force);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetMaxForce: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetMaxForce: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MotorJoint::GetMaxForce() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:80
 */
static int b2MotorJoint_GetMaxForce(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    lua_pushnumber(L, self->GetMaxForce());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetMaxForce: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetMaxForce: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MotorJoint::SetMaxTorque(float32 torque)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:83
 */
static int b2MotorJoint_SetMaxTorque(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    float32 torque = dub_checknumber(L, 2);
    self->SetMaxTorque(torque);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetMaxTorque: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetMaxTorque: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MotorJoint::GetMaxTorque() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:86
 */
static int b2MotorJoint_GetMaxTorque(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    lua_pushnumber(L, self->GetMaxTorque());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetMaxTorque: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetMaxTorque: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MotorJoint::Dump()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MotorJoint.h:89
 */
static int b2MotorJoint_Dump(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    self->Dump();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Dump: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Dump: Unknown exception");
  }
  return dub_error(L);
}

/** b2JointType b2Joint::GetType() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:109
 */
static int b2MotorJoint_GetType(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    lua_pushnumber(L, self->GetType());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetType: Unknown exception");
  }
  return dub_error(L);
}

/** b2Body * b2Joint::GetBodyA()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:112
 */
static int b2MotorJoint_GetBodyA(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    b2Body *retval__ = self->GetBodyA();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "b2.Body", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetBodyA: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetBodyA: Unknown exception");
  }
  return dub_error(L);
}

/** b2Body * b2Joint::GetBodyB()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:115
 */
static int b2MotorJoint_GetBodyB(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    b2Body *retval__ = self->GetBodyB();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "b2.Body", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetBodyB: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetBodyB: Unknown exception");
  }
  return dub_error(L);
}

/** b2Joint * b2Joint::GetNext()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:130
 */
static int b2MotorJoint_GetNext(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    b2Joint *retval__ = self->GetNext();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "b2.Joint", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetNext: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetNext: Unknown exception");
  }
  return dub_error(L);
}

/** void * b2Joint::GetUserData() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:134
 */
static int b2MotorJoint_GetUserData(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    self->GetUserData();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetUserData: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetUserData: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Joint::SetUserData(void *data)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:137
 */
static int b2MotorJoint_SetUserData(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    void *data = *((void **)dub_checksdata(L, 2, "void"));
    self->SetUserData(data);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetUserData: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetUserData: Unknown exception");
  }
  return dub_error(L);
}

/** bool b2Joint::IsActive() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:140
 */
static int b2MotorJoint_IsActive(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    lua_pushboolean(L, self->IsActive());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "IsActive: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "IsActive: Unknown exception");
  }
  return dub_error(L);
}

/** bool b2Joint::GetCollideConnected() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:145
 */
static int b2MotorJoint_GetCollideConnected(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    lua_pushboolean(L, self->GetCollideConnected());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetCollideConnected: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetCollideConnected: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void b2Joint::ShiftOrigin(const b2Vec2 &newOrigin)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:151
 */
static int b2MotorJoint_ShiftOrigin(lua_State *L) {
  try {
    b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata(L, 1, "b2.MotorJoint"));
    b2Vec2 *newOrigin = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    self->ShiftOrigin(*newOrigin);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "ShiftOrigin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "ShiftOrigin: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2MotorJoint___tostring(lua_State *L) {
  b2MotorJoint *self = *((b2MotorJoint **)dub_checksdata_n(L, 1, "b2.MotorJoint"));
  lua_pushfstring(L, "b2.MotorJoint: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2MotorJoint_member_methods[] = {
  { "__gc"         , b2MotorJoint__b2MotorJoint },
  { "_cast_"       , b2MotorJoint__cast_  },
  { "GetAnchorA"   , b2MotorJoint_GetAnchorA },
  { "GetAnchorB"   , b2MotorJoint_GetAnchorB },
  { "GetReactionForce", b2MotorJoint_GetReactionForce },
  { "GetReactionTorque", b2MotorJoint_GetReactionTorque },
  { "SetLinearOffset", b2MotorJoint_SetLinearOffset },
  { "GetLinearOffset", b2MotorJoint_GetLinearOffset },
  { "SetAngularOffset", b2MotorJoint_SetAngularOffset },
  { "GetAngularOffset", b2MotorJoint_GetAngularOffset },
  { "SetMaxForce"  , b2MotorJoint_SetMaxForce },
  { "GetMaxForce"  , b2MotorJoint_GetMaxForce },
  { "SetMaxTorque" , b2MotorJoint_SetMaxTorque },
  { "GetMaxTorque" , b2MotorJoint_GetMaxTorque },
  { "Dump"         , b2MotorJoint_Dump    },
  { "GetType"      , b2MotorJoint_GetType },
  { "GetBodyA"     , b2MotorJoint_GetBodyA },
  { "GetBodyB"     , b2MotorJoint_GetBodyB },
  { "GetNext"      , b2MotorJoint_GetNext },
  { "GetUserData"  , b2MotorJoint_GetUserData },
  { "SetUserData"  , b2MotorJoint_SetUserData },
  { "IsActive"     , b2MotorJoint_IsActive },
  { "GetCollideConnected", b2MotorJoint_GetCollideConnected },
  { "ShiftOrigin"  , b2MotorJoint_ShiftOrigin },
  { "__tostring"   , b2MotorJoint___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_MotorJoint(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.MotorJoint");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2MotorJoint_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "MotorJoint", "MotorJoint");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
