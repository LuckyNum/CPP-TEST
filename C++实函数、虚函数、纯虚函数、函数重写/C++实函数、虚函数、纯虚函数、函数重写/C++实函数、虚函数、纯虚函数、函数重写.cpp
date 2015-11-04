// C++实函数、虚函数、纯虚函数、函数重写.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "man.h"


int _tmain(int argc, _TCHAR* argv[])
{
	people *p=new Man(20);
	p->sayHello();
	p->eat();
	getchar();

	return 0;
}

