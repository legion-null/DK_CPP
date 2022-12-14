#pragma once

#include "图形界面/抽象按钮/抽象按钮.h"

namespace 当康 {
namespace 图形界面 {

class 普通按钮: public 抽象按钮 {
类声明(普通按钮)

public:
	普通按钮& 构造();
	void 析构();

public:
	普通按钮& 复制构造(const 普通按钮 &其他实例);
	普通按钮& 移动构造(普通按钮 &&其他实例);
};

}
}
