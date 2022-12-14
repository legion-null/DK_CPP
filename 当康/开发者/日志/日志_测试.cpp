#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

i32 开发者_日志_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	日志::打印日志(日志::调试信息, "你好世界\n");

	return 0;
}
