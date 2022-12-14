#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

抽象类定义(当康::图形界面::抽象按钮)

抽象按钮& 抽象按钮::构造() {
	return (*this);
}

void 抽象按钮::析构() {

}

抽象按钮& 抽象按钮::复制构造(const 抽象按钮 &其他实例) {
	throw 异常("抽象按钮:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

抽象按钮& 抽象按钮::移动构造(抽象按钮 &&其他实例) {
	throw 异常("抽象按钮:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

bool 抽象按钮::获取按下() const {
	return 按下;
}

void 抽象按钮::设置按下(bool 按下) {
	this->按下 = 按下;
}

bool 抽象按钮::获取回弹() const {
	return 回弹;
}

void 抽象按钮::设置回弹(bool 回弹) {
	this->回弹 = 回弹;
}

}
}
