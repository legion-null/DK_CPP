#pragma once

#include "基础类/对象/对象.h"

命名空间 当康 {
命名空间 开发者 {

类 日志: 继承 基础类::对象 {
类声明(日志)

公开:
	类型别名 枚举 日志级别 : i8 {
		致命错误 = 0, //
		严重错误, //
		一般错误, //
		严重警告, //
		一般警告, //
		调试信息, //
		一般信息 //
	} 日志级别;

公开:
	静态 日志级别 当前日志级别;

公开:
	静态 void 格式化打印日志(日志级别 级别, 只读 c8 *格式, ...);
	静态 void 打印日志(日志级别 级别, 只读 基础类::字符串 &文本);

公开:
	日志& 构造();
	虚函数 void 析构() 覆盖;

公开:
	日志& 复制构造(只读 日志 &其他实例);
	日志& 移动构造(日志 &&其他实例);

};

}
}
