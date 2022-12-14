#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 基础类 {

类定义(当康::基础类::对象)

bool 对象::对象类型比较(对象 *对象1, 对象 *对象2) {
	if (对象1 == nullptr or 对象2 == nullptr)
		throw 异常("");

	if (对象1->获取类全名() == 对象2->获取类全名())
		return true;
	else
		return false;
}

bool 对象::对象类型比较(对象 &对象1, 对象 &对象2) {
	return 对象类型比较(&对象1, &对象2);
}

bool 对象::对象类型比较(对象 &对象1, 对象 *对象2) {
	return 对象类型比较(&对象1, 对象2);
}

对象& 对象::构造() {
	return (*this);
}

void 对象::析构() {

}

对象& 对象::复制构造(const 对象 &其他实例) {
	复制(&其他实例, this);
	return (*this);
}

对象& 对象::移动构造(对象 &&其他实例) {
	return (*this);
}

const c8* 对象::转为字符串() {
	return "当康::基础类::对象";
}

}
}

