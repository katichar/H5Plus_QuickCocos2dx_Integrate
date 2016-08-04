
#ifndef __GAME_UTIL_H_
#define __GAME_UTIL_H_
extern "C" {
#include "lua.h"
#include "tolua++.h"
}
#include "tolua_fix.h"

TOLUA_API int luaopen_GameUtil_luabinding(lua_State* tolua_S);
#endif // __HELPERFUNC_LUABINDING_H_
