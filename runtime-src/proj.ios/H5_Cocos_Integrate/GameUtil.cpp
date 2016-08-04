/*
** Lua binding: HelperFunc_luabinding
** Generated automatically by tolua++-1.0.92 on Sun Aug  2 18:34:55 2015.
*/

#include "GameUtil.h"
#include "LuaHelper.h"
static void tolua_reg_types (lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"LuaHelper");
}

#ifndef TOLUA_DISABLE_tolua_HelperFunc_luabinding_HelperFunc_getFileData00
static int tolua_LuaHelper_luabinding_LuaHelper_back2App00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (
        !tolua_isusertable(tolua_S,1,"LuaHelper",0,&tolua_err) ||
        !tolua_isstring(tolua_S,2,0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,3,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        LuaHelper::back2App();
    }
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'back2App'.",&tolua_err);
    return 0;
#endif
}
#endif
TOLUA_API int tolua_GameUtil_luabinding_open (lua_State* tolua_S)
{
    tolua_open(tolua_S);
    tolua_reg_types(tolua_S);
    tolua_cclass(tolua_S,"LuaHelper","LuaHelper","",NULL);
    tolua_beginmodule(tolua_S,"LuaHelper");
    tolua_function(tolua_S,"back2App",tolua_LuaHelper_luabinding_LuaHelper_back2App00);
    tolua_endmodule(tolua_S);
    return 1;
}
#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
TOLUA_API int luaopen_GameUtil_luabinding (lua_State* tolua_S) {
    return tolua_GameUtil_luabinding_open(tolua_S);
};
#endif


