#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

抽象类定义(当康::图形处理::图形2D)

图形2D& 图形2D::构造() {
	return (*this);
}

void 图形2D::析构() {

}

图形2D& 图形2D::构造(i32 x, i32 y) {
	设置位置(x, y);
	return (*this);
}

图形2D& 图形2D::构造(const 像素点2D &位置) {
	设置位置(位置);
	return (*this);
}

图形2D& 图形2D::复制构造(const 图形2D &其他实例) {
	return (*this);
}

图形2D& 图形2D::移动构造(图形2D &&其他实例) {
	return (*this);
}

i32 图形2D::获取x() const {
	return 位置.获取x();
}

i32 图形2D::获取y() const {
	return 位置.获取y();
}

void 图形2D::获取位置(i32 &x, i32 &y) const {
	return 位置.获取位置(x, y);
}

const 像素点2D& 图形2D::获取位置() const {
	return 位置;
}

void 图形2D::设置x(i32 x) {
	return 位置.设置x(x);
}

void 图形2D::设置y(i32 y) {
	return 位置.设置y(y);
}

void 图形2D::设置位置(i32 x, i32 y) {
	return 位置.设置位置(x, y);
}

void 图形2D::设置位置(const 像素点2D &位置) {
	this->位置 = 位置;
}

const 像素点2D& 图形2D::获取顶点(i32 序号) const {
	return 顶点[序号];
}

}
}

