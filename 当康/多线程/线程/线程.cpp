#include "当康.h"

#include <unistd.h>
#include <pthread.h>

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 多线程 {

类定义(当康::多线程::线程)

typedef struct 线程数据 {
	pthread_t 线程ID;
} 线程数据;

void 线程::睡眠(u32 秒数) {
	::sleep(秒数);
}

void 线程::挂起() {

}

void* 线程::线程运行函数(void *参数) {
	线程 *此线程 = (线程*) 参数;
	此线程->运行();
	return nullptr;
}

线程& 线程::构造() {
	构造(this);
	return (*this);
}

void 线程::析构() {

}

线程& 线程::构造(线程接口 *任务) {
	Pthread数据 = new 线程数据;
	this->任务 = 任务;
	return (*this);
}

线程& 线程::复制构造(const 线程 &其他实例) {
	throw 异常("线程:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

线程& 线程::移动构造(线程 &&其他实例) {
	throw 异常("线程:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

i32 线程::启动() {
	return ::pthread_create(&(Pthread数据->线程ID), nullptr, 线程::线程运行函数, (void*) this);
}

i32 线程::等待() {
	return ::pthread_join(Pthread数据->线程ID, nullptr);
}

i32 线程::分离() {
	return ::pthread_detach(Pthread数据->线程ID);
}

i32 线程::恢复() {
	return 0;
}

i32 线程::取消() {
	return ::pthread_cancel(Pthread数据->线程ID);
}

void* 线程::运行() {
	if (任务 == nullptr)
		throw 异常("");

	return 任务->运行();
}

}
}
