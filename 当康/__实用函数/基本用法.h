#pragma once

#include "定义.h"

namespace 当康 {

template<class E>
void 交换(E &a, E &b) {
	E temp = a;
	a = b;
	b = temp;
}

template<class E>
void 复制(const E *源, E *目标, i32 元素大小, i32 元素个数) {
	const u8 *p1 = (const u8*) 源;
	u8 *p2 = (u8*) 目标;

	for (i32 i = 0; i < 元素个数; i++) {
		for (i32 j = 0; j < 元素大小; j++) {
			*p2 = *p1;
			p1++;
			p2++;
		}
	}
}

template<class E>
void 复制(const E *源, E *目标, i32 元素个数) {
	复制(源, 目标, sizeof(E), 元素个数);
}

template<class E>
void 复制(const E *源, E *目标) {
	复制(源, 目标, 1);
}

template<class E>
void 移动(E *源, E *目标, i32 元素个数) {
	复制(源, 目标, 元素个数);
	delete[] 源;
}

}
