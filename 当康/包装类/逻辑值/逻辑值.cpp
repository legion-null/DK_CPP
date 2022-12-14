#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 包装类 {

类定义(当康::包装类::逻辑值)

逻辑值& 逻辑值::构造() {
	return (*this);
}

void 逻辑值::析构() {

}

逻辑值& 逻辑值::复制构造(const 逻辑值 &其他实例) {
	return (*this);
}

逻辑值& 逻辑值::移动构造(逻辑值 &&其他实例) {
	return (*this);
}

}
}
