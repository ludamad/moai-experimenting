/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2RayCastCallback
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/b2WorldCallbacks.h"


/** virtual b2RayCastCallback::~b2RayCastCallback()
 * vendor/Box2D/Box2D/Dynamics/b2WorldCallbacks.h:138
 */
static int b2RayCastCallback__b2RayCastCallback(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.RayCastCallback"));
    if (userdata->gc) {
      b2RayCastCallback *self = (b2RayCastCallback *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2RayCastCallback: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2RayCastCallback: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float32 b2RayCastCallback::ReportFixture(b2Fixture *fixture, const b2Vec2 &point, const b2Vec2 &normal, float32 fraction)=0
 * vendor/Box2D/Box2D/Dynamics/b2WorldCallbacks.h:152
 */
static int b2RayCastCallback_ReportFixture(lua_State *L) {
  try {
    b2RayCastCallback *self = *((b2RayCastCallback **)dub_checksdata(L, 1, "b2.RayCastCallback"));
    b2Fixture *fixture = *((b2Fixture **)dub_checksdata(L, 2, "b2.Fixture"));
    b2Vec2 *point = *((b2Vec2 **)dub_checksdata(L, 3, "b2.Vec2"));
    b2Vec2 *normal = *((b2Vec2 **)dub_checksdata(L, 4, "b2.Vec2"));
    float32 fraction = dub_checknumber(L, 5);
    lua_pushnumber(L, self->ReportFixture(fixture, *point, *normal, fraction));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "ReportFixture: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "ReportFixture: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2RayCastCallback___tostring(lua_State *L) {
  b2RayCastCallback *self = *((b2RayCastCallback **)dub_checksdata_n(L, 1, "b2.RayCastCallback"));
  lua_pushfstring(L, "b2.RayCastCallback: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2RayCastCallback_member_methods[] = {
  { "__gc"         , b2RayCastCallback__b2RayCastCallback },
  { "ReportFixture", b2RayCastCallback_ReportFixture },
  { "__tostring"   , b2RayCastCallback___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_RayCastCallback(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.RayCastCallback");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2RayCastCallback_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "RayCastCallback", "RayCastCallback");
  // <mt>
  lua_pop(L, 1);
  return 0;
}