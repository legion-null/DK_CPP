#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 输入输出 {

class 文件: public 基础类::对象 {
类声明(文件)

public:
	typedef enum 标准输入输出文件 : i8 {
		标准输入 = 0, 标准输出 = 1, 标准错误 = 2,
	} 标准输入输出文件;

public:
	static 文件 标准输入文件;
	static 文件 标准输出文件;
	static 文件 标准错误文件;

protected:
	class 文件数据 *当前文件 = nullptr;

public:
	文件(const 基础类::字符串 &文件位置, const 基础类::字符串 &读写模式) {
		构造(文件位置, 读写模式);
	}

	文件(标准输入输出文件 文件号) {
		构造(文件号);
	}

public:
	文件& 构造();
	void 析构();

public:
	文件& 构造(const 基础类::字符串 &文件位置, const 基础类::字符串 &读写模式);
	文件& 构造(标准输入输出文件 文件号);

public:
	文件& 复制构造(const 文件 &其他实例);
	文件& 移动构造(文件 &&其他实例);

public:
	void 关闭();

public:
	void 刷新();

public:
	i64 获取当前位置();
	void 设置当前位置(i64 位置);

public:
	i64 获取文件大小();

public:
	i32 读字节();
	void 读(i8 *缓冲区, i64 长度);

public:
	void 写字节(i8 数据);
	void 写(const i8 *数据, i64 长度);
};

}
}
