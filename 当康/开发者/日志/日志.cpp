#include "当康.h"

#include <stdio.h>
#include <stdarg.h>

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 开发者 {
类定义(当康::开发者::日志)

日志::日志级别 日志::当前日志级别 = 一般信息;

void 日志::格式化打印日志(日志级别 级别, const c8 *格式, ...) {
	if (级别 > 当前日志级别)
		return;

	va_list args;
	va_start(args, 格式);
	vprintf(格式, args);
	va_end(args);

	fflush(stdout);
}

void 日志::打印日志(日志级别 级别, const 基础类::字符串 &文本) {
	if (级别 > 当前日志级别)
		return;

	puts(文本.获取文本());
}

日志& 日志::构造() {
	return (*this);
}

void 日志::析构() {

}

日志& 日志::复制构造(const 日志 &其他实例) {
	return (*this);
}

日志& 日志::移动构造(日志 &&其他实例) {
	return (*this);
}

}
}

