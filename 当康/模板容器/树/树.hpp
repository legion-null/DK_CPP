#pragma once

#include "模板容器/容器/容器.hpp"

#include "模板容器/链表/链表.hpp"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 树: public 模板容器::容器<E> {
模板声明(树)

protected:
	template<class E1>
	class 节点 {

	public:
		节点<E1> *父节点 = nullptr;
		链表<节点<E1>*> 子节点;
		E1 成员;

	public:
		节点(const E1 &成员) {
			this->成员 = 成员;
		}
	};

public:
	树& 构造() {
		return (*this);
	}
	void 析构() {

	}

public:
	树& 复制构造(const 树 &其他实例) {
		return (*this);
	}

	树& 移动构造(树 &&其他实例) {
		return (*this);
	}
}
;

模板定义(当康::模板容器::树)

}
}
