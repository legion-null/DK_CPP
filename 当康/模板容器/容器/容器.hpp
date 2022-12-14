#pragma once

#include "基础类/对象/对象.h"

#include "基础类/字符串/字符串.h"

#include "模板容器/可迭代接口/可迭代接口.h"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 容器: public 基础类::对象, virtual public 可迭代接口<E> {
模板声明(容器)

protected:
	i32 成员数量 = 0;

public:
	容器& 构造() {
		return (*this);
	}

	void 析构() {

	}

public:
	容器& 复制构造(const 容器 &其他实例) {
		throw 基础类::异常("容器:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

		return (*this);
	}

	容器& 移动构造(容器 &&其他实例) {
		throw 基础类::异常("容器:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

		return (*this);
	}

public:
	i32 获取成员数量() const {
		return 成员数量;
	}

	bool 为空() const {
		return 获取成员数量() == 0 ? true : false;
	}

public:
	virtual bool 索引合法性判断(i32 索引) {
		if (索引 < 0 or 索引 >= 成员数量)
			return false;
		else
			return true;
	}

public:
	virtual void 增加成员(const E &成员) = 0;
	virtual void 删除成员(i32 索引) = 0;
	virtual void 修改成员(i32 索引, const E &现成员) = 0;
	virtual E& 查找成员(i32 索引) = 0;

public:
	E& operator[](i32 索引) {
		return 查找成员(索引);
	}

public:
	virtual 迭代器<E>* 获取迭代器() override {
		return new 容器_迭代器<E>(this);
	}

protected:
	template<class E1>
	class 容器_迭代器: public 模板容器::迭代器<E1> {
	模板声明(容器_迭代器)

	protected:
		容器<E1> *当前容器 = nullptr;
		i32 当前索引 = 0;

	public:
		容器_迭代器(容器<E1> *容器指针) {
			构造(容器指针);
		}

	public:
		容器_迭代器& 构造() {
			return (*this);
		}

		void 析构() {

		}

	public:
		容器_迭代器& 构造(容器<E1> *容器指针) {
			this->当前容器 = 容器指针;
			return (*this);
		}

	public:
		容器_迭代器& 复制构造(const 容器_迭代器 &其他实例) {
			复制(&其他实例, this);
			return (*this);
		}

		容器_迭代器& 移动构造(容器_迭代器 &&其他实例) {
			return (*this);
		}

	public:
		virtual bool 存在下个成员() override {
			if (当前索引 + 1 < 当前容器->获取成员数量())
				return true;
			else
				return false;
		}

		virtual E& 下个成员() override {
			return (*当前容器)[++当前索引];
		}

		virtual void 删除当前成员() override {
			当前容器->删除成员(当前索引);
		}
	};

};

模板定义(当康::模板容器::容器)
模板定义(当康::模板容器::容器::容器_迭代器)

}
}
