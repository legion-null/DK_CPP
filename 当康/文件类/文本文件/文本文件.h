#pragma once

#include "文件类/文件/文件.h"

namespace 当康 {
namespace 文件类 {

class 文本文件: public 文件 {
类声明(文本文件)

public:
	文本文件& 构造();
	void 析构();

public:
	文本文件& 复制构造(const 文本文件 &其他实例);
	文本文件& 移动构造(文本文件 &&其他实例);
};

}
}
