#pragma once

#include <图形处理/图片/图片.h>

namespace 当康 {
namespace 图形处理 {

class 图片_BMP: public 图片 {
类声明(图片_BMP)

public:
	图片_BMP(const 基础类::字符串 &图片文件位置) {
		构造(图片文件位置);
	}

public:
	图片_BMP& 构造();
	void 析构();

public:
	图片_BMP& 构造(const 基础类::字符串 &图片文件位置);

public:
	图片_BMP& 复制构造(const 图片_BMP &其他实例);
	图片_BMP& 移动构造(图片_BMP &&其他实例);
};

}
}
