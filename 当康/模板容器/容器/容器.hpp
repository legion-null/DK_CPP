#pragma once

#include <基础类/对象/对象.h>

命名空间 当康 {
命名空间 模板容器 {

模板<类 E>
模板类 容器: 继承 基础类::对象 {
模板声明(容器)

公开:
	容器& 构造();
	void 析构();

公开:
	容器& 复制构造(只读 容器 &其他实例);
	容器& 移动构造(容器 &&其他实例);
};

模板定义(当康::容器类::容器)

}
}
