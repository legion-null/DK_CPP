#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::颜色)

颜色& 颜色::构造() {
	return (*this);
}

void 颜色::析构() {

}

颜色& 颜色::构造(i32 颜色值) {
	设置颜色值(颜色值);
	return (*this);
}

颜色& 颜色::复制构造(const 颜色 &其他实例) {
	设置颜色值(其他实例.颜色数据.值);
	return (*this);
}

颜色& 颜色::移动构造(颜色 &&其他实例) {
	设置颜色值(其他实例.颜色数据.值);
	delete &其他实例;
	return (*this);
}

i32 颜色::获取颜色值() const {
	return 颜色数据.值;
}

void 颜色::设置颜色值(i32 颜色值) {
	颜色数据.值 = 颜色值;
}

u8 颜色::获取R() {
	return 0;
}

u8 颜色::获取G() {
	return 0;
}

u8 颜色::获取B() {
	return 0;
}

void 颜色::获取RGB(u8 &R, u8 &G, u8 &B) {
}

void 颜色::设置R(u8 R) {
}

void 颜色::设置G(u8 G) {
}

void 颜色::设置B(u8 B) {
}

void 颜色::设置RGB(u8 R, u8 G, u8 B) {
}

f32 颜色::获取r() {
	return 获取R() / 255.0;
}

f32 颜色::获取g() {
	return 获取G() / 255.0;
}

f32 颜色::获取b() {
	return 获取B() / 255.0;
}

void 颜色::获取rgb(f32 &r, f32 &g, f32 &b) {
	r = 获取R() / 255.0;
	g = 获取G() / 255.0;
	b = 获取B() / 255.0;
}

void 颜色::设置r(f32 r) {
	return 设置R(255 * r);
}

void 颜色::设置g(f32 g) {
	return 设置G(255 * g);
}

void 颜色::设置b(f32 b) {
	return 设置B(255 * b);
}

void 颜色::设置rgb(f32 r, f32 g, f32 b) {
	return 设置RGB(255 * r, 255 * g, 255 * b);
}

}
}
