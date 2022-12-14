#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::模板容器;
using namespace 当康::图形处理;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::容器)

容器& 容器::构造() {
	return (*this);
}

void 容器::析构() {

}

容器& 容器::复制构造(const 容器 &其他实例) {
	throw 异常("容器:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

容器& 容器::移动构造(容器 &&其他实例) {
	throw 异常("容器:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

void 容器::添加子组件(组件 *子组件) {
	子组件->设置父组件(this);
	子组件链表.增加成员(子组件);
}

void 容器::绘制自身(画笔 *画笔) {

}

}
}

