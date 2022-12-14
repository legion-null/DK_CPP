#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 文件类 {

类定义(当康::文件类::文件)

文件& 文件::构造() {
	return (*this);
}

void 文件::析构() {

}

文件& 文件::复制构造(const 文件 &其他实例) {
	throw 异常("文件:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

文件& 文件::移动构造(文件 &&其他实例) {
	throw 异常("文件:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
