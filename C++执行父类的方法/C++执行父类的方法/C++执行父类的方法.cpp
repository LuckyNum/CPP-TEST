// C++ִ�и���ķ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "man.h"


int _tmain(int argc, _TCHAR* argv[])
{
	man *m=new man(18);
	m->sayHello();	//�����Լ��ķ���
	m->people::sayHello();	//���ø��෽��
	getchar();

	return 0;
}

