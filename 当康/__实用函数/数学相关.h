#pragma once

#include "定义.h"

namespace 当康 {

template<class E>
E 取绝对值(E a) {
	return a >= 0 ? a : -a;
}

template<class E>
E 取差值(E &a, E &b) {
	return Abs(a - b);
}

template<class E>
E 取最小值(E a, E b) {
	return a <= b ? a : b;
}

template<class E>
E 取最大值(E a, E b) {
	return a >= b ? a : b;
}

}
