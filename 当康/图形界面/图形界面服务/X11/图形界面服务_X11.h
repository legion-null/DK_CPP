#pragma once

#include "图形界面/图形界面服务/图形界面服务.h"

namespace 当康 {
namespace 图形界面 {

class 图形界面服务_X11: public 图形界面服务 {
抽象类声明(图形界面服务_X11)

protected:
	struct X11图形界面服务相关数据 *X11服务 = nullptr;

public:
	图形界面服务_X11& 构造();
	void 析构();

public:
	图形界面服务_X11& 复制构造(const 图形界面服务_X11 &其他实例);
	图形界面服务_X11& 移动构造(图形界面服务_X11 &&其他实例);

protected:
	friend class 屏幕_X11;
	friend class 鼠标_X11;
	friend class 键盘_X11;
	friend class 触摸板_X11;
};

}
}

#include "屏幕/屏幕_X11.h"

#include "鼠标/鼠标_X11.h"
