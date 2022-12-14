#pragma once

#include "图形界面/容器/容器.h"

namespace 当康 {
namespace 图形界面 {

class 图片框: public 容器 {
类声明(图片框)

public:
	图片框& 构造();
	void 析构();

public:
	图片框& 复制构造(const 图片框 &其他实例);
	图片框& 移动构造(图片框 &&其他实例);
};

}
}
