#include "当康.h"

//#include <GL/gl.h>

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::画笔_OpenGL)

画笔_OpenGL& 画笔_OpenGL::构造() {
	return (*this);
}

void 画笔_OpenGL::析构() {

}

画笔_OpenGL& 画笔_OpenGL::复制构造(const 画笔_OpenGL &其他实例) {
	throw 异常("画笔_OpenGL:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

画笔_OpenGL& 画笔_OpenGL::移动构造(画笔_OpenGL &&其他实例) {
	throw 异常("画笔_OpenGL:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
