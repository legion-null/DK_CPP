#include "当康.h"

#include <stdio.h>

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 输入输出 {

类定义(当康::输入输出::文件)

class 文件数据 {
public:
	FILE *文件指针;
}__attribute__((packed));

文件 文件::标准输入文件 = 文件(标准输入);
文件 文件::标准输出文件 = 文件(标准输出);
文件 文件::标准错误文件 = 文件(标准错误);

文件& 文件::构造() {
	return (*this);
}

void 文件::析构() {
	if (当前文件 != nullptr)
		delete 当前文件;
}

文件& 文件::构造(const 字符串 &文件位置, const 字符串 &读写模式) {
	当前文件 = new 文件数据;

	当前文件->文件指针 = ::fopen(文件位置.获取文本(), 读写模式.获取文本());

	return (*this);
}

文件& 文件::构造(标准输入输出文件 文件号) {
	当前文件 = new 文件数据;

	switch (文件号) {
	case 标准输入:
		当前文件->文件指针 = stdin;
		break;
	case 标准输出:
		当前文件->文件指针 = stdout;
		break;
	case 标准错误:
		当前文件->文件指针 = stderr;
		break;
	}

	return (*this);
}

文件& 文件::复制构造(const 文件 &其他实例) {
	throw 异常("文件:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

文件& 文件::移动构造(文件 &&其他实例) {
	throw 异常("文件:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

void 文件::关闭() {
	::fclose(当前文件->文件指针);
}

void 文件::刷新() {
	::fflush(当前文件->文件指针);
}

i64 文件::获取当前位置() {
	return ::ftell(当前文件->文件指针);
}

void 文件::设置当前位置(i64 位置) {
	::fseek(当前文件->文件指针, 位置, SEEK_SET);
}

i64 文件::获取文件大小() {
	i64 临时值 = 获取当前位置();
	i64 文件大小 = ::fseek(当前文件->文件指针, 0, SEEK_END);
	设置当前位置(临时值);

	return 文件大小;
}

i32 文件::读字节() {
	return ::fgetc(当前文件->文件指针);
}

void 文件::读(i8 *缓冲区, i64 长度) {
	::fread(缓冲区, 1, 长度, 当前文件->文件指针);
}

void 文件::写字节(i8 数据) {
	::fputc(数据, 当前文件->文件指针);
}

void 文件::写(const i8 *数据, i64 长度) {
	::fwrite(数据, 1, 长度, 当前文件->文件指针);
}

}
}

