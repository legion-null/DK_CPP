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

标签& 标签::复制构造(只读 标签 &其他实例) {
	抛出 异常("标签:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

标签& 标签::移动构造(标签 &&其他实例) {
	抛出 异常("标签:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

const 基础类::字符串& 标签::获取文本() const {
	返回 文本;
}

void 标签::设置文本(const 基础类::字符串 &文本) {
	本元->文本 = 文本;
}

}
}
