#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::多线程;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::图形界面服务)

图形界面服务& 图形界面服务::构造() {
	return (*this);
}

void 图形界面服务::析构() {

}

图形界面服务& 图形界面服务::复制构造(const 图形界面服务 &其他实例) {
	throw 异常("图形界面服务:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

图形界面服务& 图形界面服务::移动构造(图形界面服务 &&其他实例) {
	throw 异常("图形界面服务:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

屏幕* 图形界面服务::获取当前屏幕() const {
	return 当前屏幕;
}

鼠标* 图形界面服务::获取当前鼠标() const {
	return 当前鼠标;
}

键盘* 图形界面服务::获取当前键盘() const {
	return 当前键盘;
}

触摸板* 图形界面服务::获取当前触摸板() const {
	return 当前触摸板;
}

void* 图形界面服务::运行() {
	while (true) {
		if (当前屏幕 != nullptr)
			当前屏幕->刷新();

		if (当前鼠标 != nullptr)
			当前鼠标->运行();
	}

	return nullptr;
}

i32 图形界面服务::启动() {
	线程 屏幕线程(当前屏幕);
	线程 鼠标线程(当前鼠标);
	线程 键盘线程(当前键盘);
	线程 触摸板线程(当前触摸板);

	屏幕线程.启动();

	线程 服务线程(this);

	服务线程.启动();

	while (true) {
		线程::睡眠(1);
	}

	return 0;
}

}
}

