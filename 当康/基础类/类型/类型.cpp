#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

引入 当康::模板容器;

命名空间 当康 {
命名空间 基础类 {

类定义(当康::基础类::类型)

类型别名 结构体 类信息 {
	字符串 *类全名;
	i32 哈希值;
	字符串& (*返回类全名)();
	字符串& (*获取类全名)();
	对象* (*构建本类对象)();
}__attribute__((packed)) 类信息;

i32 类型::类型注册(只读 字符串 *类全名指针) {
	反射信息链表.增加成员((void*)类全名指针);
	i32 哈希值 = 字符串::计算字符串哈希值(类全名指针->获取文本());
	日志::格式化打印日志(日志::调试信息, "类型注册(\"%s\") 0x%08x\n", 类全名指针->获取文本(), 哈希值);

	返回 哈希值;
}

对象* 类型::根据类全名构建对象(只读 字符串 &类全名) {
	返回 空指针;
}

类型& 类型::构造() {
	返回 本体;
}

void 类型::析构() {

}

类型& 类型::复制构造(只读 类型 &其他实例) {
	返回 本体;
}

类型& 类型::移动构造(类型 &&其他实例) {
	返回 本体;
}

}
}
