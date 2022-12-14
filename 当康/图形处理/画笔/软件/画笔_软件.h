#pragma once

#include "图形处理/画笔/画笔.h"

namespace 当康 {
namespace 图形处理 {

class 画笔_软件: public 画笔 {
类声明(画笔_软件)

public:
	画笔_软件& 构造();
	void 析构();

public:
	画笔_软件& 复制构造(const 画笔_软件 &其他实例);
	画笔_软件& 移动构造(画笔_软件 &&其他实例);
};

}
}
