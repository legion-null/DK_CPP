#include "当康.h"

using namespace 当康;

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

i32 基础类_字符串_测试(i32 参数个数, c8 **参数列表) {
	const c8 *a = "HelloWorldWorldHelloWorld";
	const c8 *b = "World";
	c8 *c = 字符串::替换字符串(a, "Wo", "你好");

	日志::格式化打印日志(日志::一般信息, "%d.\n", 字符串::查找字符串(a, b));
	日志::格式化打印日志(日志::一般信息, "%d.\n", 字符串::查找字符串个数(a, b));
	日志::格式化打印日志(日志::一般信息, "%s.\n", c);

	return 0;
}
