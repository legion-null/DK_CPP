#pragma once

#include "图形处理/画布/画布.h"

命名空间 当康 {
命名空间 图形界面 {

类 屏幕: 继承 图形处理::画布 {
抽象类声明(屏幕)

公开:
	屏幕(i32 宽度, i32 高度, i32 像素色深, 图形处理::图形::显示方向 方向) {
		构造(宽度, 高度, 像素色深, 方向);
	}

公开:
	屏幕& 构造();
	void 析构();

公开:
	屏幕& 构造(i32 宽度, i32 高度, i32 像素色深, 图形处理::图形::显示方向 方向);

公开:
	屏幕& 复制构造(只读 屏幕 &其他实例);
	屏幕& 移动构造(屏幕 &&其他实例);

公开:
	虚函数 void 刷新矩形区域(i32 x0, i32 y0, i32 宽度, i32 高度) = 0;
	虚函数 void 刷新();

公开:
	虚函数 void 测试();
};

}
}

