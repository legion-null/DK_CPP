#include "当康.h"

using namespace 当康;

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::多线程;
using namespace 当康::图形界面;

i32 图形界面_图形界面服务_X11_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	图形界面服务* 服务 = new 图形界面服务_X11();


	return 0;
}
