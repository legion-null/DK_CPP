#include "当康.h"

using namespace 当康;

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::图形处理;
using namespace 当康::图形界面;

i32 图形界面_屏幕_SDL2_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	图形界面服务* 服务 = new 图形界面服务_X11();
	屏幕 *测试屏幕 = 服务->获取当前屏幕();

	测试屏幕->测试();

	while (true)
		;

	return 0;
}
