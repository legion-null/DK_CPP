#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::图形处理;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::组件)

组件& 组件::构造() {
	return (*this);
}

void 组件::析构() {

}

组件& 组件::构造(i32 x, i32 y, i32 宽度, i32 高度) {
	设置外接矩形(x, y, 宽度, 高度);

	return (*this);
}

组件& 组件::复制构造(const 组件 &其他实例) {
	throw 异常("组件:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

组件& 组件::移动构造(组件 &&其他实例) {
	throw 异常("组件:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

i32 组件::获取x() const {
	return 外接矩形.获取x();
}

i32 组件::获取y() const {
	return 外接矩形.获取y();
}

void 组件::获取位置(i32 &x, i32 &y) const {
	return 外接矩形.获取位置(x, y);
}

const 图形处理::像素点2D& 组件::获取位置() const {
	return 外接矩形.获取位置();
}

void 组件::设置x(i32 x) {
	return 外接矩形.设置x(x);
}

void 组件::设置y(i32 y) {
	return 外接矩形.设置y(y);
}

void 组件::设置位置(i32 x, i32 y) {
	return 外接矩形.设置位置(x, y);
}

void 组件::设置位置(const 图形处理::像素点2D &位置) {
	return 外接矩形.设置位置(位置);
}

i32 组件::获取宽度() const {
	return 外接矩形.获取宽度();
}

i32 组件::获取高度() const {
	return 外接矩形.获取高度();
}

void 组件::获取大小(i32 &宽度, i32 &高度) const {
	return 外接矩形.获取大小(宽度, 高度);
}

void 组件::设置宽度(i32 宽度) {
	return 外接矩形.设置宽度(宽度);
}

void 组件::设置高度(i32 高度) {
	return 外接矩形.设置高度(高度);
}

void 组件::设置大小(i32 宽度, i32 高度) {
	return 外接矩形.设置大小(宽度, 高度);
}

void 组件::获取外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) const {
	return 外接矩形.获取外接矩形(x, y, 宽度, 高度);
}

const 图形处理::矩形2D& 组件::获取外接矩形() const {
	return 外接矩形;
}

void 组件::设置外接矩形(i32 x, i32 y, i32 宽度, i32 高度) {
	外接矩形.构造(x, y, 宽度, 高度);
}

void 组件::设置外接矩形(const 图形处理::矩形2D &外接矩形) {
	this->外接矩形 = 外接矩形;
}

i32 组件::获取绝对x() {
	i32 x = 0;
	i32 y = 0;
	获取绝对位置(x, y);
	return x;
}

i32 组件::获取绝对y() {
	i32 x = 0;
	i32 y = 0;
	获取绝对位置(x, y);
	return y;
}

void 组件::获取绝对位置(i32 &x, i32 &y) {
	组件 *p = this;
	x = 0;
	y = 0;
	while (p != nullptr) {
		x += p->获取x();
		y += p->获取y();
		p = p->父组件;
	}
}

像素点2D 组件::获取绝对位置() {
	i32 x = 0;
	i32 y = 0;
	获取绝对位置(x, y);
	return 像素点2D(x, y);
}

void 组件::获取绝对外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) {
	获取绝对位置(x, y);
	获取大小(宽度, 高度);
}

矩形2D 组件::获取绝对外接矩形() {
	return 矩形2D(获取绝对位置(), 获取宽度(), 获取高度());
}

组件* 组件::获取父组件() const {
	return 父组件;
}

void 组件::设置父组件(组件 *父组件) {
	this->父组件 = 父组件;
}

void 组件::设置动作监听器(动作事件监听器 *监听器) {
	当前监听器 = 监听器;
}

void 组件::发送动作事件(动作事件 *事件) {
	if (当前监听器 == nullptr)
		return;

	当前监听器->处理动作事件(事件);
}

void 组件::绘制自身(图形处理::画笔 *画笔) {
	if (当前主题 != nullptr)
		当前主题->绘制框架(画笔, this);
}

}
}

