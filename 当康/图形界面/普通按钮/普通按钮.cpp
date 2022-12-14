#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::普通按钮)

普通按钮& 普通按钮::构造() {
	return (*this);
}

void 普通按钮::析构() {

}

普通按钮& 普通按钮::复制构造(const 普通按钮 &其他实例) {
	throw 异常("普通按钮:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

普通按钮& 普通按钮::移动构造(普通按钮 &&其他实例) {
	throw 异常("普通按钮:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
