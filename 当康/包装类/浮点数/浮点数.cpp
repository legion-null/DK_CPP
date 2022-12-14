#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 包装类 {

类定义(当康::包装类::浮点数)

浮点数& 浮点数::构造() {
	return (*this);
}

void 浮点数::析构() {

}

浮点数& 浮点数::复制构造(const 浮点数 &其他实例) {
	return (*this);
}

浮点数& 浮点数::移动构造(浮点数 &&其他实例) {
	return (*this);
}

}
}
