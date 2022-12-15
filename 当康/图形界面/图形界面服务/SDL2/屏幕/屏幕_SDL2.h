#pragma once

#include "图形界面/屏幕/屏幕.h"

namespace 当康 {
namespace 图形界面 {

class 屏幕_SDL2: public 屏幕 {
类声明(屏幕_SDL2)

protected:
	struct SDL2图形界面服务相关数据 *SDL2服务 = nullptr;
	基础类::字符串 屏幕名称;

public:
	屏幕_SDL2(const 基础类::字符串 &屏幕名称, i32 宽度, i32 高度, i32 像素色深, 图形处理::图形::显示方向 方向) {
		构造(屏幕名称, 宽度, 高度, 像素色深, 方向);
	}

	屏幕_SDL2(图形界面服务_SDL2 *服务) {
		构造(服务);
	}

public:
	屏幕_SDL2& 构造();
	void 析构();

public:
	屏幕_SDL2& 构造(const 基础类::字符串 &屏幕名称, i32 宽度, i32 高度, i32 像素色深, 图形处理::图形::显示方向 方向);
	屏幕_SDL2& 构造(图形界面服务_SDL2 *服务);

public:
	屏幕_SDL2& 复制构造(const 屏幕_SDL2 &其他实例);
	屏幕_SDL2& 移动构造(屏幕_SDL2 &&其他实例);

public:
	virtual void 刷新矩形区域(i32 x0, i32 y0, i32 宽度, i32 高度) override;
	virtual void 刷新() override;
};

}
}
