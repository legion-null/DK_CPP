#pragma once

#include "图形处理/屏幕/屏幕.h"

命名空间 当康 {
命名空间 图形处理 {

类 屏幕_SDL2: 继承 屏幕 {
类声明(屏幕_SDL2)

保护:
	类 SDL2数据 *SDL2;
	基础类:: 字符串 屏幕名称;

公开:
	屏幕_SDL2(只读 基础类::字符串 &屏幕名称, i32 宽度, i32 高度, i32 像素色深, 图形::显示方向 方向){
		构造(屏幕名称, 宽度, 高度, 像素色深, 方向);
	}

公开:
	屏幕_SDL2& 构造();
	void 析构();

公开:
	屏幕_SDL2& 构造(只读 基础类::字符串 &屏幕名称, i32 宽度, i32 高度, i32 像素色深, 图形::显示方向 方向);

公开:
	屏幕_SDL2& 复制构造(只读 屏幕_SDL2 &其他实例);
	屏幕_SDL2& 移动构造(屏幕_SDL2 &&其他实例);

公开:
	虚函数 void 刷新矩形区域(i32 x0, i32 y0, i32 宽度, i32 高度) 覆盖;
	虚函数 void 刷新() 覆盖;
};

}
}
