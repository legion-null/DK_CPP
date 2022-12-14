#pragma once

#include "图形界面/抽象按钮/抽象按钮.h"

namespace 当康 {
namespace 图形界面 {

class 复选框: public 抽象按钮 {
类声明(复选框)

public:
	复选框& 构造();
	void 析构();

public:
	复选框& 复制构造(const 复选框 &其他实例);
	复选框& 移动构造(复选框 &&其他实例);
};

}
}
