#pragma once

#include "定义.h"

命名空间 当康 {

模板<类 E>
void 交换(E &a, E &b) {
	E temp = a;
	a = b;
	b = temp;
}

模板<类 E>
void 复制(只读 E *源, E *目标, uSize 元素个数) {
	循环 (uSize i = 0; i < 元素个数; i++) {
		目标[i] = 源[i];
	}
}

模板<类 E>
void 移动(E *源, E *目标, uSize 元素个数) {
	复制(源, 目标, 元素个数);
	删除[] 源;
}

}
