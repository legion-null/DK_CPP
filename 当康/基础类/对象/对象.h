#pragma once

#include "定义.h"

命名空间 当康 {
命名空间 基础类 {

类 字符串;

类 对象 {
类声明(对象)

公开:
	静态 bool 对象类型比较(对象 *对象1, 对象 *对象2);
	静态 bool 对象类型比较(对象 &对象1, 对象 &对象2);
	静态 bool 对象类型比较(对象 &对象1, 对象 *对象2);

公开:
	对象& 构造();
	void 析构();

公开:
	对象& 复制构造(只读 对象 &其他实例);
	对象& 移动构造(对象 &&其他实例);

};

}
}
