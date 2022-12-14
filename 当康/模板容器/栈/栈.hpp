#pragma once

#include "模板容器/链表/链表.hpp"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 栈: public 模板容器::链表<E> {
模板声明(栈)

public:
	栈& 构造() {
		return (*this);
	}

	void 析构() {

	}

public:
	栈& 复制构造(const 栈 &其他实例) {
		return (*this);
	}

	栈& 移动构造(栈 &&其他实例) {
		return (*this);
	}

protected:
	using 链表<E>::增加成员;
	using 链表<E>::删除成员;
	using 链表<E>::修改成员;
	using 链表<E>::查找成员;

public:
	E& 获取栈底成员() {
		if (this->为空())
			throw 基础类::异常("");

		return this->头节点->成员;
	}

	E& 获取栈顶成员() {
		if (this->为空())
			throw 基础类::异常("");

		return this->头节点->上一个->成员;
	}

public:
	void 压栈(const E &成员) {
		this->增加成员(成员);
	}

	E 弹栈() {
		E 栈顶成员 = 获取栈顶成员();
		this->删除成员(this->获取成员数量() - 1);
		return 栈顶成员;
	}

};

模板定义(当康::模板容器::栈)

}
}
