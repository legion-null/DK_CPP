#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 文件类 {

类定义(当康::文件类::文本文件)

文本文件& 文本文件::构造() {
	return (*this);
}

void 文本文件::析构() {

}

文本文件& 文本文件::复制构造(const 文本文件 &其他实例) {
	throw 异常("文本文件:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

文本文件& 文本文件::移动构造(文本文件 &&其他实例) {
	throw 异常("文本文件:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
