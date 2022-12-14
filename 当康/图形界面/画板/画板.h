#pragma once

#include "图形界面/容器/容器.h"

namespace 当康 {
namespace 图形界面 {

class 画板: public 容器 {
类声明(画板)

public:
	画板& 构造();
	void 析构();

public:
	画板& 复制构造(const 画板 &其他实例);
	画板& 移动构造(画板 &&其他实例);
};

}
}
