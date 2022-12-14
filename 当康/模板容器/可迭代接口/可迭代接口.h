#pragma once

#include <模板容器/迭代器/迭代器.hpp>
#include "基础类/接口/接口.h"

namespace 当康 {
namespace 模板容器 {

template<class E>
class 可迭代接口: virtual public 基础类::接口 {
接口声明(可迭代接口)

public:
	virtual 迭代器<E>* 获取迭代器() = 0;

};

}
}
