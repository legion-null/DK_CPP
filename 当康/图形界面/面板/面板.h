#pragma once

#include "图形界面/容器/容器.h"

namespace 当康 {
namespace 图形界面 {

class 面板: public 容器 {
类声明(面板)

public:
	面板& 构造();
	void 析构();

public:
	面板& 复制构造(const 面板 &其他实例);
	面板& 移动构造(面板 &&其他实例);
};

}
}
