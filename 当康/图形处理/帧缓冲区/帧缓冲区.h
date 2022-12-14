#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 图形处理 {

class 帧缓冲区: public 基础类::对象 {
类声明(帧缓冲区)

protected:
	i32 宽度 = 0;
	i32 高度 = 0;
	i32 像素色深 = 0;

protected:
	i32 行缓冲区大小 = 0;
	i32 缓冲区大小 = 0;

protected:
	u8 *帧缓冲 = nullptr;
	u8 **行缓冲 = nullptr;

public:
	帧缓冲区& 构造();
	void 析构();

public:
	帧缓冲区& 构造(i32 宽度, i32 高度, i32 像素色深);

public:
	帧缓冲区& 复制构造(const 帧缓冲区 &其他实例);
	帧缓冲区& 移动构造(帧缓冲区 &&其他实例);

public:
	i32 获取宽度() const;
	i32 获取高度() const;

	void 获取大小(i32 &宽度, i32 &高度) const;

	void 设置高度(i32 高度);
	void 设置宽度(i32 宽度);

	void 设置大小(i32 宽度, i32 高度);

public:
	i32 获取像素色深() const;

	void 设置像素色深(i32 像素色深);

private:
	void 初始化缓冲区();

public:
	i32 读像素点(i32 x, i32 y) const;
	void 写像素点(i32 x, i32 y, i32 值);

public:
	void 写行像素点(i32 x0, i32 y0, i32 宽度, i32 值);
	void 写列像素点(i32 x0, i32 y0, i32 高度, i32 值);

	void 写矩形像素点(i32 x0, i32 y0, i32 宽度, i32 高度, i32 值);

public:
	void 清屏(i32 值);
};

}
}
