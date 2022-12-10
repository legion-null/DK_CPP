#pragma once

#include "基础类/对象/对象.h"

#include "多线程/线程接口/线程接口.h"

#include "图形界面/屏幕/屏幕.h"
#include "图形界面/鼠标/鼠标.h"
#include "图形界面/键盘/键盘.h"
#include "图形界面/触摸板/触摸板.h"

命名空间 当康 {
命名空间 图形界面 {

类 图形界面服务: 继承 基础类::对象, 虚继承 多线程::线程接口 {
抽象类声明(图形界面服务)

保护:
	屏幕 *当前屏幕 = 空指针;
	鼠标 *当前鼠标 = 空指针;
	键盘 *当前键盘 = 空指针;
	触摸板 *当前触摸板 = 空指针;


公开:
	图形界面服务& 构造();
	void 析构();

公开:
	图形界面服务& 复制构造(只读 图形界面服务 &其他实例);
	图形界面服务& 移动构造(图形界面服务 &&其他实例);

公开:
	屏幕* 获取当前屏幕() 只读;
	鼠标* 获取当前鼠标() 只读;
	键盘* 获取当前键盘() 只读;
	触摸板* 获取当前触摸板() 只读;

公开:
	虚函数 void* 运行() 覆盖;

公开:
	i32 启动();
};

}
}

#include "SDL2/图形界面服务_SDL2.h"
#include "X11/图形界面服务_X11.h"

#include "Linux/图形界面服务_Linux.h"
#include "Windows/图形界面服务_Windows.h"

