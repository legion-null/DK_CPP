#pragma once

#include "模板容器/链表/链表.hpp"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 队列: public 链表<E> {
模板声明(队列)

public:
	队列& 构造() {
		return (*this);
	}

	void 析构() {

	}

public:
	队列& 复制构造(const 队列 &其他实例) {
		return (*this);
	}

	队列& 移动构造(队列 &&其他实例) {
		return (*this);
	}

protected:
	using 链表<E>::增加成员;
	using 链表<E>::删除成员;
	using 链表<E>::修改成员;
	using 链表<E>::查找成员;

public:
	E& 获取队首成员() {
		if (this->为空())
			throw 基础类::异常("");

		return this->头节点->成员;
	}

	E& 获取队尾成员() {
		if (this->为空())
			throw 基础类::异常("");

		return this->头节点->上一个->成员;
	}

public:
	void 入队(const E &成员) {
		this->增加成员(成员);
	}

	E 出队() {
		E 队首成员 = 获取队首成员();
		this->删除成员(0);
		return 队首成员;
	}

};

模板定义(当康::模板容器::队列)

}
}
