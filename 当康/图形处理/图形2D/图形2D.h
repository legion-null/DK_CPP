#pragma once

#include "基础类/对象/对象.h"

#include "图形处理/像素点2D/像素点2D.h"

namespace 当康 {
namespace 图形处理 {

class 图形2D: public 基础类::对象 {
抽象类声明(图形2D)

protected:
	像素点2D 位置;
	像素点2D *顶点 = nullptr;

public:
	图形2D(i32 x, i32 y) {
		构造(x, y);
	}

	图形2D(const 像素点2D &位置) {
		构造(位置);
	}

public:
	图形2D& 构造();
	void 析构();

public:
	图形2D& 构造(i32 x, i32 y);
	图形2D& 构造(const 像素点2D &位置);

public:
	图形2D& 复制构造(const 图形2D &其他实例);
	图形2D& 移动构造(图形2D &&其他实例);

public:
	i32 获取x() const;
	i32 获取y() const;
	void 获取位置(i32 &x, i32 &y) const;
	const 像素点2D& 获取位置() const;

	void 设置x(i32 x);
	void 设置y(i32 y);
	void 设置位置(i32 x, i32 y);
	void 设置位置(const 像素点2D &位置);

public:
	const 像素点2D& 获取顶点(i32 序号) const;

public:
	virtual f64 计算面积() = 0;

	virtual void 获取外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) const = 0;
	virtual void 设置外接矩形(i32 x, i32 y, i32 宽度, i32 高度) = 0;
};

}
}
