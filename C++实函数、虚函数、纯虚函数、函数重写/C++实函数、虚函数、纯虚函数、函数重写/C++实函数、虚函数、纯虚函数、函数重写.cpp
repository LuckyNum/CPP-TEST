// C++ʵ�������麯�������麯����������д.cpp : �������̨Ӧ�ó������ڵ㡣
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

