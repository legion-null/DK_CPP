#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 包装类 {

类定义(当康::包装类::整数)

整数& 整数::构造() {
	return (*this);
}

void 整数::析构() {

}

整数& 整数::复制构造(const 整数 &其他实例) {
	return (*this);
}

整数& 整数::移动构造(整数 &&其他实例) {
	return (*this);
}

}
}
