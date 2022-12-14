#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::模板容器;

namespace 当康 {
namespace 基础类 {

类定义(当康::基础类::类型)

typedef struct 类信息 {
	字符串 *类全名;
	i32 哈希值;
	字符串& (*返回类全名)();
	字符串& (*获取类全名)();
	对象* (*构建本类对象)();
} __attribute__((packed)) 类信息;

static 字符串 *反射信息数组[100];
static i32 可反射类总数 = 0;

i32 类型::类型注册(const 字符串 *类全名指针) {
	i32 哈希值 = 字符串::计算字符串哈希值(类全名指针->获取文本());

	反射信息数组[可反射类总数++] = (字符串*) 类全名指针;

	日志::格式化打印日志(日志::调试信息, "%d 类型注册(\"%s\") 0x%08x\n", 可反射类总数, 类全名指针->获取文本(), 哈希值);

	return 哈希值;
}

对象* 类型::根据类全名构建对象(const 字符串 &类全名) {
	return nullptr;
}

类型& 类型::构造() {
	return (*this);
}

void 类型::析构() {

}

类型& 类型::复制构造(const 类型 &其他实例) {
	return (*this);
}

类型& 类型::移动构造(类型 &&其他实例) {
	return (*this);
}

}
}
