#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::像素点2D)

像素点2D& 像素点2D::构造() {
	return (*this);
}

void 像素点2D::析构() {

}

像素点2D& 像素点2D::构造(i32 x, i32 y) {
	设置位置(x, y);
	return (*this);
}

像素点2D& 像素点2D::复制构造(const 像素点2D &其他实例) {
	设置位置(其他实例.x, 其他实例.y);
	return (*this);
}

像素点2D& 像素点2D::移动构造(像素点2D &&其他实例) {
	设置位置(其他实例.x, 其他实例.y);
	delete &其他实例;
	return (*this);
}

i32 像素点2D::获取x() const {
	return x;
}

i32 像素点2D::获取y() const {
	return y;
}

void 像素点2D::获取位置(i32 &x, i32 &y) const {
	x = this->x;
	y = this->y;
}

void 像素点2D::设置x(i32 x) {
	this->x = x;
}

void 像素点2D::设置y(i32 y) {
	this->y = y;
}

void 像素点2D::设置位置(i32 x, i32 y) {
	this->x = x;
	this->y = y;
}

void 像素点2D::移动(i32 dx, i32 dy) {
	this->x += dx;
	this->y += dy;
}

void 像素点2D::旋转(f32 角度) {
}

void 像素点2D::绕点旋转(像素点2D &点, f32 角度) {
}

}
}
