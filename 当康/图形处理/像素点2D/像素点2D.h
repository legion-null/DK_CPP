#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 图形处理 {

class 像素点2D: public 基础类::对象 {
类声明(像素点2D)

protected:
	i32 x = 0;
	i32 y = 0;

public:
	像素点2D(i32 x, i32 y) {
		构造(x, y);
	}

public:
	像素点2D& 构造();
	void 析构();

public:
	像素点2D& 构造(i32 x, i32 y);

public:
	像素点2D& 复制构造(const 像素点2D &其他实例);
	像素点2D& 移动构造(像素点2D &&其他实例);

public:
	i32 获取x() const;
	i32 获取y() const;

	void 获取位置(i32 &x, i32 &y) const;

public:
	void 设置x(i32 x);
	void 设置y(i32 y);

	void 设置位置(i32 x, i32 y);

public:
	void 移动(i32 dx, i32 dy);

public:
	void 旋转(f32 角度);
	void 绕点旋转(像素点2D &点, f32 角度);
}
;

}
}
