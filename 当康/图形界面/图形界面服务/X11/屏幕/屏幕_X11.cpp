#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::图形处理;

#include "../X11图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::屏幕_X11)

屏幕_X11& 屏幕_X11::构造() {
	return 构造("X11_液晶屏模拟器 作者:legion", 800, 600, 32, 图形::不旋转);
}

void 屏幕_X11::析构() {
	::XCloseDisplay(X11服务->显示设备);
}

屏幕_X11& 屏幕_X11::构造(const 基础类::字符串 &屏幕名称, i32 宽度, i32 高度, i32 像素色深, 图形::显示方向 方向) {
	日志::格式化打印日志(日志::调试信息, "屏幕_X11& 屏幕_X11::构造(只读 基础类::字符串 &屏幕名称 = \"%s\", i32 宽度 = %d, i32 高度 = %d, i32 像素色深 = %d, 图形::显示方向 方向 = %d)\n", 屏幕名称.获取文本(), 宽度, 高度, 像素色深, 方向);

	屏幕::构造(宽度, 高度, 像素色深, 方向);

	if (X11服务 == nullptr)
		X11服务 = new X11图形界面服务相关数据();

	X11服务->显示设备 = ::XOpenDisplay(0);

	X11服务->窗口 = ::XCreateSimpleWindow(X11服务->显示设备, DefaultRootWindow(X11服务->显示设备), 0, 0, 宽度, 高度, //
	1, BlackPixel(X11服务->显示设备, 0), WhitePixel(X11服务->显示设备, 0));

	::XStoreName(X11服务->显示设备, X11服务->窗口, 屏幕名称.获取文本());

	X11服务->图形上下文 = DefaultGC(X11服务->显示设备, DefaultScreen(X11服务->显示设备));
	X11服务->帧缓冲区 = ::XCreateImage(X11服务->显示设备, DefaultVisual(X11服务->显示设备, DefaultScreen(X11服务->显示设备)), DefaultDepth(X11服务->显示设备, DefaultScreen(X11服务->显示设备)), ZPixmap, 0, (c8*) 帧缓冲, 宽度, 高度, 像素色深, 0);

	::XMapWindow(X11服务->显示设备, X11服务->窗口);
	::XFlush(X11服务->显示设备);

	return (*this);
}

屏幕_X11& 屏幕_X11::构造(图形界面服务_X11 *服务) {
	X11服务 = 服务->X11服务;
	return 构造();
}

屏幕_X11& 屏幕_X11::复制构造(const 屏幕_X11 &其他实例) {
	throw 异常("屏幕_X11:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

屏幕_X11& 屏幕_X11::移动构造(屏幕_X11 &&其他实例) {
	throw 异常("屏幕_X11:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

void 屏幕_X11::刷新矩形区域(i32 x0, i32 y0, i32 宽度, i32 高度) {
	::XPutImage(X11服务->显示设备, X11服务->窗口, X11服务->图形上下文, X11服务->帧缓冲区, x0, y0, 0, 0, 宽度, 高度);
	::XFlush(X11服务->显示设备);
}

}
}

