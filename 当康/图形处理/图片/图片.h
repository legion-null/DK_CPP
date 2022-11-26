#pragma once

#include <图形处理/帧缓冲区/帧缓冲区.h>

命名空间 当康 {
命名空间 图形处理 {

类 图片: 继承 帧缓冲区 {
类声明(图片)

公开:
	图片& 构造();
	void 析构();

公开:
	图片& 复制构造(只读 图片 &其他实例);
	图片& 移动构造(图片 &&其他实例);

私有:
	使用 帧缓冲区::读像素点;
	使用 帧缓冲区::写像素点;

	使用 帧缓冲区::写列像素点;
	使用 帧缓冲区::写行像素点;

	使用 帧缓冲区::写矩形像素点;

	使用 帧缓冲区::清屏;

公开:
	颜色 获取像素点(i32 x, i32 y) 只读;
};

}
}

#include "BMP/图片_BMP.h"
