#pragma once

#include "图形界面/图形界面服务/图形界面服务.h"

namespace 当康 {
namespace 图形界面 {

class 图形界面服务_SDL2: public 图形界面服务 {
抽象类声明(图形界面服务_SDL2)

protected:
	class SDL2图形界面服务相关数据 *SDL2服务 = nullptr;

public:
	图形界面服务_SDL2& 构造();
	void 析构();

public:
	图形界面服务_SDL2& 复制构造(const 图形界面服务_SDL2 &其他实例);
	图形界面服务_SDL2& 移动构造(图形界面服务_SDL2 &&其他实例);

protected:
	friend class 屏幕_SDL2;
	friend class 鼠标_SDL2;
	friend class 键盘_SDL2;
	friend class 触摸板_SDL2;
};

}
}

#include "屏幕/屏幕_SDL2.h"
#include "鼠标/鼠标_SDL2.h"
#include "键盘/键盘_SDL2.h"
#include "触摸板/触摸板_SDL2.h"
