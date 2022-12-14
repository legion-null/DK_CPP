#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::三角形2D)

三角形2D& 三角形2D::构造() {
	return (*this);
}

void 三角形2D::析构() {

}

三角形2D& 三角形2D::复制构造(const 三角形2D &其他实例) {
	return (*this);
}

三角形2D& 三角形2D::移动构造(三角形2D &&其他实例) {
	return (*this);
}

f64 三角形2D::计算面积() {
	return 0;
}

void 三角形2D::获取外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) const {
}

void 三角形2D::设置外接矩形(i32 x, i32 y, i32 宽度, i32 高度) {
}

}
}

