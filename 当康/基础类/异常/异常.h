#pragma once

#include "基础类/对象/对象.h"

命名空间 当康 {
命名空间 基础类 {

类 异常: 继承 基础类::对象 {
类声明(异常)

公开:
	异常(只读 字符串 &字符串) {
		构造(字符串);
	}

公开:
	异常& 构造();
	void 析构();

公开:
	异常& 构造(只读 字符串 &字符串);

公开:
	异常& 复制构造(只读 异常 &其他实例);
	异常& 移动构造(异常 &&其他实例);
};

}
}
