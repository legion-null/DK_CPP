#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 常用单例 {

单例定义(当康::常用单例::系统)

系统 *系统::此系统 = new 系统();

系统& 系统::构造() {
	return (*this);
}

void 系统::析构() {

}

系统& 系统::复制构造(const 系统 &其他实例) {
	throw 异常("系统:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

系统& 系统::移动构造(系统 &&其他实例) {
	throw 异常("系统:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
