#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::矩形2D)

矩形2D& 矩形2D::构造() {
	return (*this);
}

void 矩形2D::析构() {

}

矩形2D& 矩形2D::构造(i32 x, i32 y, i32 宽度, i32 高度) {
	设置外接矩形(x, y, 宽度, 高度);
	return (*this);
}

矩形2D& 矩形2D::构造(const 像素点2D &位置, i32 宽度, i32 高度) {
	return 构造(位置.获取x(), 位置.获取y(), 宽度, 高度);
}

矩形2D& 矩形2D::构造(i32 宽度, i32 高度) {
	return 构造(0, 0, 宽度, 高度);
}

矩形2D& 矩形2D::复制构造(const 矩形2D &其他实例) {
	return (*this);
}

矩形2D& 矩形2D::移动构造(矩形2D &&其他实例) {
	return (*this);
}

i32 矩形2D::获取宽度() const {
	return 宽度;
}

i32 矩形2D::获取高度() const {
	return 高度;
}

void 矩形2D::获取大小(i32 &宽度, i32 &高度) const {
	宽度 = this->宽度;
	高度 = this->高度;
}

void 矩形2D::设置宽度(i32 宽度) {
	this->宽度 = 宽度;
}

void 矩形2D::设置高度(i32 高度) {
	this->高度 = 高度;
}

void 矩形2D::设置大小(i32 宽度, i32 高度) {
	this->宽度 = 宽度;
	this->高度 = 高度;
}

f64 矩形2D::计算面积() {
	return 宽度 * 高度;
}

void 矩形2D::获取外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) const {
	获取位置(x, y);
	获取大小(宽度, 高度);
}

void 矩形2D::设置外接矩形(i32 x, i32 y, i32 宽度, i32 高度) {
	设置位置(x, y);
	设置大小(宽度, 高度);
}

}
}

