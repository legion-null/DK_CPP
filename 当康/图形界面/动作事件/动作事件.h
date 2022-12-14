#pragma once

#include "基础类/事件/事件.h"

namespace 当康 {
namespace 图形界面 {

class 动作事件: public 基础类::事件 {
类声明(动作事件)

public:
	typedef enum 事件类型 : i8 {
		点击, //
		悬停, //
		短按, //
		长按, //
		滑动, //
	} 事件类型;

public:
	动作事件& 构造();
	void 析构();

public:
	动作事件& 复制构造(const 动作事件 &其他实例);
	动作事件& 移动构造(动作事件 &&其他实例);
};

}
}
