
extern "C" {
#include "lua.h"
}
#include "xxtea/xxtea.h"
#include "CCLuaEngine.h"
#include "LuaHelper.h"
#include "PluginTest.h"
#import "platform/ios/CCEAGLView-ios.h"

int LuaHelper::back2App()
{
    CCLOG("LuaHelper back2App");
    [PGPluginTest back2App];
    return 1;
}
