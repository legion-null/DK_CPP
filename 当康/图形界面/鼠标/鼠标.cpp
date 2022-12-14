#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::鼠标)

鼠标& 鼠标::构造() {
	return (*this);
}

void 鼠标::析构() {

}

鼠标& 鼠标::复制构造(const 鼠标 &其他实例) {
	throw 异常("鼠标:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

鼠标& 鼠标::移动构造(鼠标 &&其他实例) {
	throw 异常("鼠标:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
