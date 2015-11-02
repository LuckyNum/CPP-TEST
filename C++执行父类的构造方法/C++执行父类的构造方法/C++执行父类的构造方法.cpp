// C++执行父类的构造方法.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "man.h"

int _tmain(int argc, _TCHAR* argv[])
{
	man *m=new man(20);

	printf("age:%d\n",m->getAge());
	getchar();

	return 0;
}

