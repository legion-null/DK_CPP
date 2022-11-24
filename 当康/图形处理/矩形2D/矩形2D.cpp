#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

命名空间 当康 {
命名空间 图形处理 {

类定义(当康::图形处理::矩形2D)

矩形2D& 矩形2D::构造() {
	返回 本体;
}

void 矩形2D::析构() {

}

矩形2D& 矩形2D::构造(i32 宽度, i32 高度) {
	设置大小(宽度, 高度);
	返回 本体;
}

矩形2D& 矩形2D::复制构造(只读 矩形2D &其他实例) {
	返回 本体;
}

矩形2D& 矩形2D::移动构造(矩形2D &&其他实例) {
	返回 本体;
}

i32 矩形2D::获取宽度() 只读 {
	返回 宽度;
}

i32 矩形2D::获取高度() 只读 {
	返回 高度;
}

void 矩形2D::获取大小(i32 &宽度, i32 &高度) 只读 {
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
	返回 宽度 * 高度;
}

}
}
