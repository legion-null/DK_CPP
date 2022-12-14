#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 基础类 {
类定义(当康::基础类::错误)

错误& 错误::构造() {
	return (*this);
}

void 错误::析构() {

}

错误& 错误::复制构造(const 错误 &其他实例) {
	return (*this);
}

错误& 错误::移动构造(错误 &&其他实例) {
	return (*this);
}

}
}
