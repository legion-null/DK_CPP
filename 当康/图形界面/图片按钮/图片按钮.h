#pragma once

#include "图形界面/抽象按钮/抽象按钮.h"

namespace 当康 {
namespace 图形界面 {

class 图片按钮: public 抽象按钮 {
类声明(图片按钮)

public:
	图片按钮& 构造();
	void 析构();

public:
	图片按钮& 复制构造(const 图片按钮 &其他实例);
	图片按钮& 移动构造(图片按钮 &&其他实例);
};

}
}
