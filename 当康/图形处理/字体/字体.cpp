#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::字体)

字体& 字体::构造() {
	return (*this);
}

void 字体::析构() {

}

字体& 字体::复制构造(const 字体 &其他实例) {
	throw 异常("字体:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

字体& 字体::移动构造(字体 &&其他实例) {
	throw 异常("字体:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
