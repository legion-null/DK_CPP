#include "当康.h"

#include <stdio.h>
#include <stdarg.h>

命名空间 当康 {
命名空间 开发者 {
类定义(当康::开发者::日志)

日志::日志级别 日志::当前日志级别 = 一般信息;

void 日志::格式化打印日志(日志级别 级别, 只读 c8 *格式, ...) {
	如果 (级别 > 当前日志级别)
		返回;

	va_list args;
	va_start(args, 格式);
	vprintf(格式, args);
	va_end(args);

	fflush(stdout);
}

void 日志::打印日志(日志级别 级别, 只读 基础类::字符串 &文本) {
	如果 (级别 > 当前日志级别)
		返回;

	puts(文本.获取文本());
}

日志& 日志::构造() {
	返回 本体;
}

void 日志::析构() {

}

日志& 日志::复制构造(只读 日志 &其他实例) {
	返回 本体;
}

日志& 日志::移动构造(日志 &&其他实例) {
	返回 本体;
}

}
}

