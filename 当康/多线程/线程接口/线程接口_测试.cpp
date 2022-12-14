#include "当康.h"

using namespace 当康;

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::多线程;

class A: public 对象, virtual public 线程接口 {
public:
	i32 n = 0;

	A(i32 n) {
		this->n = n;
	}

	void* 运行() {
		while (true) {
			日志::格式化打印日志(日志::一般信息, "n = %d\n", n);
			线程::睡眠(1);
		}
		return 0;
	}
};

i32 多线程_线程接口_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	A a0(1);
	A a1(2);
	A a2(3);

	线程 A0(&a0);
	线程 A1(&a1);
	线程 A2(&a2);

	A0.启动();
	A1.启动();
	A2.启动();

	线程::睡眠(10);

	return 0;
}
