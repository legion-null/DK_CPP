#pragma once

#include <图形处理/帧缓冲区/帧缓冲区.h>

namespace 当康 {
namespace 图形处理 {

class 图片: public 帧缓冲区 {
类声明(图片)

public:
	图片& 构造();
	void 析构();

public:
	图片& 复制构造(const 图片 &其他实例);
	图片& 移动构造(图片 &&其他实例);

private:
	using 帧缓冲区::读像素点;
	using 帧缓冲区::写像素点;

	using 帧缓冲区::写列像素点;
	using 帧缓冲区::写行像素点;

	using 帧缓冲区::写矩形像素点;

	using 帧缓冲区::清屏;

public:
	const 颜色 获取像素点(i32 x, i32 y) const;
};

}
}

#include "BMP/图片_BMP.h"
