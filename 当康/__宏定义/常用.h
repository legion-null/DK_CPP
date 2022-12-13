#pragma once

#include "定义.h"

// 标识符转字符串
#define __标识符转字符串(X)		#X
#define 标识符转字符串(X)			__标识符转字符串(X)

// 字符串拼接
#define __标识符拼接(A,B)	A##B
#define 标识符拼接(A,B)			__标识符拼接(A,B)



// 编译相关信息
#define 代码定位				"文件:%s, 函数:%s, 行:%d\n",__FILE__,__FUNCTION__,__LINE__
#define 时间戳				"%s,%s,%s\n",__DATE__,__TIME__,__TIMESTAMP__
#define 编译器版本			"GCC 版本 = %s\n",__VERSION__
