#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::进度条)

进度条& 进度条::构造() {
	return (*this);
}

void 进度条::析构() {

}

进度条& 进度条::复制构造(const 进度条 &其他实例) {
	throw 异常("进度条:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

进度条& 进度条::移动构造(进度条 &&其他实例) {
	throw 异常("进度条:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
