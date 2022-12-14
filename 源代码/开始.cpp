#include "当康.h"

#define	测试用例		图形界面_鼠标_X11_测试

extern i32 测试用例(i32 参数个数, c8 **参数列表);

using namespace 当康;
using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

i32 main(i32 参数个数, c8 **参数列表) {
	return 测试用例(参数个数, 参数列表);
}
