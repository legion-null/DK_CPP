#include "当康.h"

using namespace 当康;

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::多线程;
using namespace 当康::图形界面;

i32 图形界面_鼠标_SDL2_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	屏幕 *测试屏幕 = new 屏幕_SDL2();
	鼠标 *测试鼠标 = new 鼠标_SDL2();

	线程 鼠标线程(测试鼠标);

	测试屏幕->刷新();
	鼠标线程.启动();

	while (true) {
		线程::睡眠(1);
		;
	}

	return 0;
}
