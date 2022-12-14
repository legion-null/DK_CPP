#pragma once

#include "模板容器/容器/容器.hpp"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 数组: public 模板容器::容器<E> {
模板声明(数组)

protected:
	static const i32 数组初始容量 = 100;
	static const i32 数组扩大倍数 = 2;

protected:
	E *数据 = nullptr;
	i32 当前容量 = 0;

public:
	数组(i32 目标容量) {
		构造(目标容量);
	}

public:
	数组& 构造() {
		设置当前容量(数组初始容量);
		return (*this);
	}

	void 析构() {

	}

public:
	数组& 构造(i32 目标容量) {
		设置当前容量(目标容量);
		return (*this);
	}

public:
	数组& 复制构造(const 数组 &其他实例) {
		throw 基础类::异常("数组:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

		return (*this);
	}

	数组& 移动构造(数组 &&其他实例) {
		throw 基础类::异常("数组:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

		return (*this);
	}

public:
	i32 获取当前容量() const {
		return 当前容量;
	}

	void 设置当前容量(i32 目标容量) {
		E *临时数据 = new E[目标容量];

		// 复制数据
		if (this->成员数量 > 0)
			复制(数据, 临时数据, this->成员数量);

		// 交换指针
		交换(数据, 临时数据);

		当前容量 = 目标容量;

		if (临时数据 != nullptr)
			delete[] 临时数据;
	}

public:
	virtual void 增加成员(const E &成员) override {
		数据[this->成员数量] = 成员;

		this->成员数量++;
	}

	virtual void 删除成员(i32 索引) override {
		if (this->索引合法性判断(索引) == false)
			throw 基础类::异常("");

		for (i32 i = 索引; i < this->成员数量 - 1; i++)
			数据[i] = 数据[i + 1];

		this->成员数量--;
	}

	virtual void 修改成员(i32 索引, const E &现成员) override {
		if (this->索引合法性判断(索引) == false)
			throw 基础类::异常("");

		数据[索引] = 现成员;
	}

	virtual E& 查找成员(i32 索引) override {
		if (this->索引合法性判断(索引) == false)
			throw 基础类::异常("");

		return 数据[索引];
	}
};

模板定义(当康::模板容器::数组)

}
}
