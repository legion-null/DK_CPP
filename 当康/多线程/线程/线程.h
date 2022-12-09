#pragma once

#include "基础类/对象/对象.h"

#include "多线程/线程接口/线程接口.h"

命名空间 当康 {
命名空间 多线程 {

类 线程: 继承 基础类::对象, 虚继承 线程接口 {
类声明(线程)

公开:
	静态 void 睡眠(u32 秒数);

保护:
	静态 void* 线程运行函数(void *参数);

保护:
	类 线程数据 *数据 = 空指针;
	线程接口 *任务 = 空指针;

公开:
	线程(线程接口 *任务) {
		构造(任务);
	}

公开:
	线程& 构造();
	void 析构();

公开:
	线程& 构造(线程接口 *任务);

公开:
	线程& 复制构造(只读 线程 &其他实例);
	线程& 移动构造(线程 &&其他实例);

公开:
	i32 启动();
	i32 阻塞();
	i32 取消();

公开:
	虚函数 void* 运行() 覆盖;

};

}
}
