#pragma once

#include "基础类/对象/对象.h"

#include "模板容器/链表/链表.hpp"

命名空间 当康 {
命名空间 基础类 {

类 类型: 继承 对象 {
类声明(类型)

保护:
	模板容器::链表<void*> 反射信息链表;

公开:
	静态 i32 类型注册(只读 字符串 *类全名指针);
	静态 对象* 根据类全名构建对象(只读 字符串 &类全名);

公开:
	类型& 构造();
	void 析构();

公开:
	类型& 复制构造(只读 类型 &其他实例);
	类型& 移动构造(类型 &&其他实例);
}
;

}
}
