#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::滚动条)

滚动条& 滚动条::构造() {
	return (*this);
}

void 滚动条::析构() {

}

滚动条& 滚动条::复制构造(const 滚动条 &其他实例) {
	throw 异常("滚动条:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

滚动条& 滚动条::移动构造(滚动条 &&其他实例) {
	throw 异常("滚动条:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
