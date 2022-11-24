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
void 复制(E *src, E *dest, i32 num) {
	for (i32 i = 0; i < num; i++) {
		dest[i] = src[i];
	}
}

模板<类 E>
void 移动(E *src, E *dest, i32 num) {
	复制(src, dest, num);
	删除[] src;
}

}
