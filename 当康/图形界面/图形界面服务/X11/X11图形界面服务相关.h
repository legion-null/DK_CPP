#pragma once

#include "定义.h"

#include <X11/Xlib.h>

namespace 当康 {
namespace 图形界面 {

struct X11图形界面服务相关数据{
	Display *显示设备;
	Window 窗口;
	GC 图形上下文;
	XImage *帧缓冲区;
	XEvent 事件;
};

}
}
