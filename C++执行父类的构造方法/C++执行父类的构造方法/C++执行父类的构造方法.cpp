// C++ִ�и���Ĺ��췽��.cpp : �������̨Ӧ�ó������ڵ㡣
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

