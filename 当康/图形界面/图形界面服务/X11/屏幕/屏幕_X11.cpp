#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

引入 当康::图形处理;

#include <X11/Xlib.h>

命名空间 当康 {
命名空间 图形界面 {

类定义(当康::图形界面::屏幕_X11)

类 XLib数据 {
公开:
	Display *显示设备;
	Window 窗口;
	GC 图形上下文;
	XImage *帧缓冲区;
};

屏幕_X11& 屏幕_X11::构造() {

	返回 本体;
}

void 屏幕_X11::析构() {
	::XCloseDisplay(xlib->显示设备);
}

屏幕_X11& 屏幕_X11::构造(
        const 基础类::字符串 &屏幕名称, i32 宽度, i32 高度, i32 像素色深, 图形::显示方向 方向) {
	日志::格式化打印日志(日志::调试信息, "屏幕_X11& 屏幕_X11::构造(只读 基础类::字符串 &屏幕名称 = \"%s\", i32 宽度 = %d, i32 高度 = %d, i32 像素色深 = %d, 图形::显示方向 方向 = %d)\n", 屏幕名称.获取文本(), 宽度, 高度, 像素色深, 方向);

	屏幕::构造(宽度, 高度, 像素色深, 方向);

	xlib = 创建 XLib数据;

	xlib->显示设备 = ::XOpenDisplay(0);

	xlib->窗口 = ::XCreateSimpleWindow(xlib->显示设备, DefaultRootWindow(xlib->显示设备), 0, 0, 宽度, 高度, //
	1, BlackPixel(xlib->显示设备, 0), WhitePixel(xlib->显示设备, 0));

	::XStoreName(xlib->显示设备, xlib->窗口, 屏幕名称.获取文本());

	xlib->图形上下文 = DefaultGC(xlib->显示设备, DefaultScreen(xlib->显示设备));
	xlib->帧缓冲区 = ::XCreateImage(xlib->显示设备, DefaultVisual(xlib->显示设备, DefaultScreen(xlib->显示设备)), DefaultDepth(xlib->显示设备, DefaultScreen(xlib->显示设备)), ZPixmap, 0, (c8*) 帧缓冲, 宽度, 高度, 像素色深, 0);

	XMapWindow(xlib->显示设备, xlib->窗口);
	XFlush(xlib->显示设备);

	返回 本体;
}

屏幕_X11& 屏幕_X11::复制构造(
        只读 屏幕_X11 &其他实例) {
	抛出 异常("屏幕_X11:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

屏幕_X11& 屏幕_X11::移动构造(
        屏幕_X11 &&其他实例) {
	抛出 异常("屏幕_X11:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

void 屏幕_X11::刷新矩形区域(
        i32 x0, i32 y0, i32 宽度, i32 高度) {
	::XPutImage(xlib->显示设备, xlib->窗口, xlib->图形上下文, xlib->帧缓冲区, x0, y0, 0, 0, 宽度, 高度);
	::XFlush(xlib->显示设备);
}

}
}

