#pragma once

#include "基础类/对象/对象.h"

#include "多线程/线程接口/线程接口.h"

#include "图形界面/屏幕/屏幕.h"
#include "图形界面/鼠标/鼠标.h"
#include "图形界面/键盘/键盘.h"
#include "图形界面/触摸板/触摸板.h"

namespace 当康 {
namespace 图形界面 {

class 图形界面服务: public 基础类::对象, virtual public 多线程::线程接口 {
抽象类声明(图形界面服务)

protected:
	屏幕 *当前屏幕 = nullptr;
	鼠标 *当前鼠标 = nullptr;
	键盘 *当前键盘 = nullptr;
	触摸板 *当前触摸板 = nullptr;

public:
	图形界面服务& 构造();
	void 析构();

public:
	图形界面服务& 复制构造(const 图形界面服务 &其他实例);
	图形界面服务& 移动构造(图形界面服务 &&其他实例);

public:
	屏幕* 获取当前屏幕() const;
	鼠标* 获取当前鼠标() const;
	键盘* 获取当前键盘() const;
	触摸板* 获取当前触摸板() const;

public:
	virtual void* 运行() override;

public:
	i32 启动();
};

}
}

#include "SDL2/图形界面服务_SDL2.h"
#include "X11/图形界面服务_X11.h"

#include "Linux/图形界面服务_Linux.h"
#include "Windows/图形界面服务_Windows.h"

