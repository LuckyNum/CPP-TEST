// C++执行父类的方法.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "man.h"


int _tmain(int argc, _TCHAR* argv[])
{
	man *m=new man(18);
	m->sayHello();	//调用自己的方法
	m->people::sayHello();	//调用父类方法
	getchar();

	return 0;
}

