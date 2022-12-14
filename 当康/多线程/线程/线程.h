#pragma once

#include "基础类/对象/对象.h"

#include "多线程/线程接口/线程接口.h"

namespace 当康 {
namespace 多线程 {

class 线程: public 基础类::对象, virtual public 线程接口 {
类声明(线程)

public:
	static void 睡眠(u32 秒数);
	static void 挂起();

protected:
	static void* 线程运行函数(void *参数);

protected:
	class 线程数据 *Pthread数据 = nullptr;
	线程接口 *任务 = nullptr;

protected:
	i8 可结合性 :1;

public:
	线程(线程接口 *任务) {
		构造(任务);
	}

public:
	线程& 构造();
	void 析构();

public:
	线程& 构造(线程接口 *任务);

public:
	线程& 复制构造(const 线程 &其他实例);
	线程& 移动构造(线程 &&其他实例);

public:
	bool 可结合() const;

public:
	i32 启动();
	i32 等待();
	i32 分离();
	i32 恢复();
	i32 取消();

public:
	virtual void* 运行() override;

};

}
}
