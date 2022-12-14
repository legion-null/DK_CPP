#pragma once

#include "图形界面/容器/容器.h"

namespace 当康 {
namespace 图形界面 {

class 滚动条: public 容器 {
类声明(滚动条)

public:
	滚动条& 构造();
	void 析构();

public:
	滚动条& 复制构造(const 滚动条 &其他实例);
	滚动条& 移动构造(滚动条 &&其他实例);
};

}
}
