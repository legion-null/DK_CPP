#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::模板容器;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::输入设备)

输入设备& 输入设备::构造() {
	return (*this);
}

void 输入设备::析构() {

}

输入设备& 输入设备::复制构造(const 输入设备 &其他实例) {
	throw 异常("输入设备:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

输入设备& 输入设备::移动构造(输入设备 &&其他实例) {
	throw 异常("输入设备:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

void* 输入设备::运行() {
	输入事件 *事件 = nullptr;
	while (true) { // 死循环 不断从设备获取输入事件
		事件 = 上报输入事件();
		if (事件 != nullptr)
			事件队列.入队(上报输入事件());
	}

	return 0;
}

bool 输入设备::输入事件是否就绪() {
	return !(事件队列.为空());
}

输入事件* 输入设备::获取输入事件() {
	return 事件队列.出队();
}

}
}

