#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

命名空间 当康 {
命名空间 图形界面 {

抽象类定义(当康::图形界面::抽象按钮)

抽象按钮& 抽象按钮::构造() {
	返回 本体;
}

void 抽象按钮::析构() {

}

抽象按钮& 抽象按钮::复制构造(只读 抽象按钮 &其他实例) {
	抛出 异常("抽象按钮:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

抽象按钮& 抽象按钮::移动构造(抽象按钮 &&其他实例) {
	抛出 异常("抽象按钮:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

bool 抽象按钮::获取按下() const {
	返回 按下;
}

void 抽象按钮::设置按下(bool 按下) {
	本元->按下 = 按下;
}

bool 抽象按钮::获取回弹() const {
	返回 回弹;
}

void 抽象按钮::设置回弹(bool 回弹) {
	本元->回弹 = 回弹;
}

}
}
