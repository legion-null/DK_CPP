#pragma once

#include "图形界面/容器/容器.h"

namespace 当康 {
namespace 图形界面 {

class 进度条: public 容器 {
类声明(进度条)

public:
	进度条& 构造();
	void 析构();

public:
	进度条& 复制构造(const 进度条 &其他实例);
	进度条& 移动构造(进度条 &&其他实例);
};

}
}
