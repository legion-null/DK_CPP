#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

#include "X11图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::图形界面服务_X11)

图形界面服务_X11& 图形界面服务_X11::构造() {
	// 创建X11服务相关数据
	X11服务 = new X11图形界面服务相关数据;

	// 初始化屏幕
	this->当前屏幕 = new 屏幕_X11(this);

	// 设置监听事件
	::XSelectInput(X11服务->显示设备, X11服务->窗口, 0x0fff);

	// 初始化鼠标
	this->当前鼠标 = new 鼠标_X11(this);
	// 初始化键盘
	this->当前键盘 = new 键盘_X11(this);
	// 初始化触摸板
	// 本元->当前触摸板 = 创建 触摸板_X11();

	return (*this);
}

void 图形界面服务_X11::析构() {

}

图形界面服务_X11& 图形界面服务_X11::复制构造(const 图形界面服务_X11 &其他实例) {
	throw 异常("图形界面服务_X11:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

图形界面服务_X11& 图形界面服务_X11::移动构造(图形界面服务_X11 &&其他实例) {
	throw 异常("图形界面服务_X11:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
