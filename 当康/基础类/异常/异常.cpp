#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 基础类 {

类定义(当康::基础类::异常)

异常& 异常::构造() {
	return (*this);
}

void 异常::析构() {

}

异常& 异常::构造(const 字符串 &字符串) {
	return (*this);
}

异常& 异常::复制构造(const 异常 &其他实例) {
	throw 异常("异常:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

异常& 异常::移动构造(异常 &&其他实例) {
	throw 异常("异常:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
