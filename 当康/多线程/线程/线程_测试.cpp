#include "当康.h"

using namespace 当康;

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::多线程;

class 测试线程: public 线程 {
public:
	i32 n = 0;

	测试线程(i32 n) {
		this->n = n;
	}

	virtual void* 运行() override {
		while (true) {
			日志::格式化打印日志(日志::一般信息, "n = %d\n", n);
			线程::睡眠(1);
		}

		return nullptr;
	}
};

i32 多线程_线程_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	测试线程 A0(0);
	测试线程 A1(1);
	测试线程 A2(2);

	A0.启动();
	A1.启动();
	A2.启动();

	线程::睡眠(10);

	return 0;
}

