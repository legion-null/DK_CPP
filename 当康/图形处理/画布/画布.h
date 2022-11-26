#pragma once

#include "图形处理/帧缓冲区/帧缓冲区.h"

#include "图形处理/图形/图形.h"
#include "图形处理/颜色/颜色.h"

命名空间 当康 {
命名空间 图形处理 {

类 画布: 继承 帧缓冲区 {
类声明(画布)

保护:
	图形::显示方向 方向;

公开:
	画布(i32 宽度, i32 高度, i32 像素色深, 图形::显示方向 方向) {
		构造(宽度, 高度, 像素色深, 方向);
	}

公开:
	画布& 构造();
	void 析构();

公开:
	画布& 构造(i32 宽度, i32 高度, i32 像素色深, 图形::显示方向 方向);

公开:
	画布& 复制构造(只读 画布 &其他实例);
	画布& 移动构造(画布 &&其他实例);

私有:
	使用 帧缓冲区::读像素点;
	使用 帧缓冲区::写像素点;
	使用 帧缓冲区::写行像素点;
	使用 帧缓冲区::写列像素点;
	使用 帧缓冲区::写矩形像素点;
	使用 帧缓冲区::清屏;

公开:
	图形::显示方向 获取画布方向() 只读;
	void 设置画布方向(图形::显示方向 方向);

公开:
	void 像素点映射(i32 &x, i32 &y);
	void 像素点反映射(i32 &x, i32 &y);

公开:
	颜色 获取像素点(i32 x, i32 y);
	void 绘制像素点(i32 x, i32 y, 只读 颜色 &颜色);

公开:
	void 绘制横线(i32 x0, i32 y0, i32 宽度, 只读 颜色 &颜色);
	void 绘制竖线(i32 x0, i32 y0, i32 高度, 只读 颜色 &颜色);

	void 填充矩形(i32 x0, i32 y0, i32 宽度, i32 高度, 只读 颜色 &颜色);

公开:
	void 清屏(只读 颜色 &颜色);

}
;

}
}
