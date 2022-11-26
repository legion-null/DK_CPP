#pragma once

#include <基础类/对象/对象.h>

命名空间 当康 {
命名空间 图形处理 {

类 帧缓冲区: 继承 基础类::对象 {
类声明(帧缓冲区)

保护:
	i32 宽度 = 0;
	i32 高度 = 0;
	i32 像素色深 = 0;

保护:
	i32 行缓冲区大小 = 0;
	i32 缓冲区大小 = 0;

保护:
	u8 *帧缓冲 = 空指针;
	u8 **行缓冲 = 空指针;

公开:
	帧缓冲区& 构造();
	void 析构();

公开:
	帧缓冲区& 构造(i32 宽度, i32 高度, i32 像素色深);

公开:
	帧缓冲区& 复制构造(只读 帧缓冲区 &其他实例);
	帧缓冲区& 移动构造(帧缓冲区 &&其他实例);

公开:
	i32 获取宽度() 只读;
	i32 获取高度() 只读;

	void 获取大小(i32 &宽度, i32 &高度) 只读;

	void 设置高度(i32 高度);
	void 设置宽度(i32 宽度);

	void 设置大小(i32 宽度, i32 高度);

公开:
	i32 获取像素色深() 只读;

	void 设置像素色深(i32 像素色深);

私有:
	void 初始化缓冲区();

公开:
	i32 读像素点(i32 x, i32 y) 只读;
	void 写像素点(i32 x, i32 y, i32 值);

公开:
	void 写行像素点(i32 x0, i32 y0, i32 宽度, i32 值);
	void 写列像素点(i32 x0, i32 y0, i32 高度, i32 值);

	void 写矩形像素点(i32 x0, i32 y0, i32 宽度, i32 高度, i32 值);

公开:
	void 清屏(i32 值);
};

}
}
