#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 基础类 {

类定义(当康::基础类::事件)

事件& 事件::构造() {
	return (*this);
}

void 事件::析构() {

}

事件& 事件::复制构造(const 事件 &其他实例) {
	return (*this);
}

事件& 事件::移动构造(事件 &&其他实例) {
	return (*this);
}

}
}
