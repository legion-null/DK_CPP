#pragma once

#include "定义.h"

命名空间 当康 {

模板<类 E>
E 取绝对值(E a) {
	返回 a >= 0 ? a : -a;
}

模板<类 E>
E 取差值(E &a, E &b) {
	返回 Abs(a - b);
}

模板<类 E>
E 取最小值(E a, E b) {
	返回 a <= b ? a : b;
}

模板<类 E>
E 取最大值(E a, E b) {
	返回 a >= b ? a : b;
}

}
