#pragma once

#include "模板容器/容器/容器.hpp"

#include "模板容器/链表/链表.hpp"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 有向图: public 模板容器::容器<E> {
模板声明(有向图)

protected:
	template<class E1>
	class 节点 {
	public:
		链表<节点<E1>*> 入节点;
		链表<节点<E1>*> 出节点;
		E1 成员;

	public:

	};

public:
	有向图& 构造() {
		return (*this);
	}

	void 析构() {

	}

public:
	有向图& 复制构造(const 有向图 &其他实例) {
		return (*this);
	}

	有向图& 移动构造(有向图 &&其他实例) {
		return (*this);
	}
};

模板定义(当康::模板容器::有向图)

}
}
