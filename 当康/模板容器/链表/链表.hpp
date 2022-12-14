#pragma once

#include "模板容器/容器/容器.hpp"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 链表: public 模板容器::容器<E> {
模板声明(链表)

protected:
	template<class E1>
	class 节点 {

	public:
		节点<E> *上一个 = nullptr;
		节点<E> *下一个 = nullptr;
		E 成员;

	public:
		节点(const E &成员) {
			上一个 = this;
			下一个 = this;

			this->成员 = 成员;
		}
	};

protected:
	节点<E> *头节点 = nullptr;

public:
	链表& 构造() {
		return (*this);
	}

	void 析构() {

	}

public:
	链表& 复制构造(const 链表 &其他实例) {
		return (*this);
	}

	链表& 移动构造(链表 &&其他实例) {
		return (*this);
	}

protected:
	节点<E>* 根据索引查找节点(i32 索引) {
		节点<E> *p = 头节点;

		for (i32 i = 0; i < 索引; i++)
			p = p->下一个;

		return p;
	}

public:
	virtual void 增加成员(const E &成员) override {
		节点<E> *新节点 = new 节点<E>(成员);

		if (this->为空()) { // 空链表
			头节点 = 新节点;
		} else { // 非空链表
			新节点->上一个 = 头节点->上一个;
			新节点->下一个 = 头节点;

			头节点->上一个->下一个 = 新节点;
			头节点->上一个 = 新节点;
		}

		this->成员数量++;
	}

	virtual void 删除成员(i32 索引) override {
		if (this->索引合法性判断(索引) == false)
			throw 基础类::异常("");

		if (this->获取成员数量() == 1) { // 只有仅存的头节点
			delete 头节点;
		} else { // 存在2个或以上节点
			节点<E> *待删除节点 = nullptr;
			if (索引 == 0) { // 删除头节点
				待删除节点 = 头节点;
				头节点 = 头节点->下一个;
			} else { // 删除其他节点
				待删除节点 = 根据索引查找节点(索引);
			}
			待删除节点->上一个->下一个 = 待删除节点->下一个;
			待删除节点->下一个->上一个 = 待删除节点->上一个;
			delete 待删除节点;
		}

		this->成员数量--;
	}

	virtual void 修改成员(i32 索引, const E &现成员) override {
		if (this->索引合法性判断(索引) == false)
			throw 基础类::异常("");

		根据索引查找节点(索引)->成员 = 现成员;
	}

	virtual E& 查找成员(i32 索引) override {
		if (this->索引合法性判断(索引) == false)
			throw 基础类::异常("");

		return 根据索引查找节点(索引)->成员;
	}

public:
	E& operator[](i32 索引) {
		return 查找成员(索引);
	}

};

模板定义(当康::模板容器::链表)

}
}
