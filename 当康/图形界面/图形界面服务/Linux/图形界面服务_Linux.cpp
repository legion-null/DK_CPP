#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::图形界面服务_Linux)

图形界面服务_Linux& 图形界面服务_Linux::构造() {
	return (*this);
}

void 图形界面服务_Linux::析构() {

}

图形界面服务_Linux& 图形界面服务_Linux::复制构造(const 图形界面服务_Linux &其他实例) {
	throw 异常("图形界面服务_Linux:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

图形界面服务_Linux& 图形界面服务_Linux::移动构造(图形界面服务_Linux &&其他实例) {
	throw 异常("图形界面服务_Linux:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
