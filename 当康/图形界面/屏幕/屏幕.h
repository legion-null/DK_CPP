#pragma once

#include "图形处理/画布/画布.h"

namespace 当康 {
namespace 图形界面 {

class 屏幕: public 图形处理::画布, virtual public 多线程::线程接口 {
抽象类声明(屏幕)

public:
	屏幕(i32 宽度, i32 高度, i32 像素色深, 图形处理::图形::显示方向 方向) {
		构造(宽度, 高度, 像素色深, 方向);
	}

public:
	屏幕& 构造();
	void 析构();

public:
	屏幕& 构造(i32 宽度, i32 高度, i32 像素色深, 图形处理::图形::显示方向 方向);

public:
	屏幕& 复制构造(const 屏幕 &其他实例);
	屏幕& 移动构造(屏幕 &&其他实例);

public:
	virtual void 刷新矩形区域(i32 x0, i32 y0, i32 宽度, i32 高度) = 0;
	virtual void 刷新();

public:
	virtual void 测试();

public:
	virtual void* 运行() override;

};

}
}

