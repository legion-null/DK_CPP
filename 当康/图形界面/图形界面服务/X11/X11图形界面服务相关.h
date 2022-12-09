#pragma once

#include "定义.h"

#include <X11/Xlib.h>

命名空间 当康 {
命名空间 图形界面 {

类型别名 结构体 X11屏幕相关数据 {
	Display *显示设备;
	Window 窗口;
	GC 图形上下文;
	XImage *帧缓冲区;
}__attribute__((packed)) X11屏幕相关数据;

类型别名 结构体 X11事件相关数据 {
	XEvent 事件;
}__attribute__((packed)) X11事件相关数据;

类型别名 结构体 X11图形界面服务相关数据 {
	X11屏幕相关数据 屏幕;
	X11事件相关数据 事件;
}__attribute__((packed)) X11图形界面服务相关数据;

}
}
