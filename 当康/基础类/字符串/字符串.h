#pragma once

#include <基础类/对象/对象.h>

命名空间 当康 {
命名空间 基础类 {

类 字符串: 继承 基础类::对象 {
类声明(字符串)

公开:
	字符串(只读 c8 *字符串) {
		构造(字符串);
	}

	字符串& 操作符 =(只读 c8 *字符串) {
		返回 构造(字符串);
	}

公开:
	字符串& 构造();
	虚函数 void 析构() 覆盖;

公开:
	字符串& 构造(只读 c8 *字符串);

公开:
	字符串& 复制构造(只读 字符串 &其他实例);
	字符串& 移动构造(字符串 &&其他实例);
}
;

}
}
