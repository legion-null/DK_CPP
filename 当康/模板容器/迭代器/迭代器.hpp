#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 模板容器 {

template<class E>
class 迭代器: public 基础类::对象 {
模板声明(迭代器)

public:
	迭代器& 构造() {
		return (*this);
	}

	void 析构() {

	}

public:
	迭代器& 复制构造(const 迭代器 &其他实例) {
		return (*this);
	}

	迭代器& 移动构造(迭代器 &&其他实例) {
		return (*this);
	}

public:
	virtual bool 存在下个成员() = 0;
	virtual E& 下个成员() = 0;
	virtual void 删除当前成员() = 0;

};

模板定义(当康::模板容器::迭代器)

}
}
