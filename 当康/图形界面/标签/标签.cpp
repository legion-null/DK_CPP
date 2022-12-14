#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

命名空间 当康 {
命名空间 图形界面 {

类定义(当康::图形界面::标签)

标签& 标签::构造() {
	返回 本体;
}

void 标签::析构() {

}

标签& 标签::构造(i32 x, i32 y, i32 宽度, i32 高度, const 字符串 &文本) {
	组件::构造(x, y, 宽度, 高度);
	设置文本(文本);

	返回 本体;
}

标签& 标签::复制构造(只读 标签 &其他实例) {
	抛出 异常("标签:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

标签& 标签::移动构造(标签 &&其他实例) {
	抛出 异常("标签:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

bool 标签::获取透明性() const {
	返回 透明性;
}

void 标签::设置透明性(bool 透明性) {
	本元->透明性 = 透明性;
}

const 基础类::字符串& 标签::获取文本() const {
	返回 文本;
}

void 标签::设置文本(const 基础类::字符串 &文本) {
	本元->文本 = 文本;
}

标签::对齐方向 标签::获取文本对齐方向() const {
	返回 文本对齐方向;
}

void 标签::设置文本对齐方向(对齐方向 文本对齐方向) {
	本元->文本对齐方向 = 文本对齐方向;
}

void 标签::绘制自身(图形处理::画笔 *画笔) {
	if (当前主题 != 空指针)
		当前主题->绘制标签(画笔, 本元);
}

}
}


