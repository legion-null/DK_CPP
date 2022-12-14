#pragma once

#include "图形界面/输入事件/输入事件.h"

namespace 当康 {
namespace 图形界面 {

class 触摸板事件: public 输入事件 {
类声明(触摸板事件)

public:
	触摸板事件& 构造();
	void 析构();

public:
	触摸板事件& 复制构造(const 触摸板事件 &其他实例);
	触摸板事件& 移动构造(触摸板事件 &&其他实例);
};

}
}
