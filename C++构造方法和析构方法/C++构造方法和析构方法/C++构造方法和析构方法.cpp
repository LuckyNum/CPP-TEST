// C++���췽������������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

class object
{
public:
	object(){
		printf("Create Object\n");
	};
	~object(){
		printf("Delete Object\n");	
	};

private:

};

//object::object()
//{
//}
//
//object::~object()
//{
//}

void runobject(){
	object obj;
	printf("runObject end\n");	//�����������ʹ����obj�󣬾�ִ��~object()���obj���ֲ�������
}

int _tmain(int argc, _TCHAR* argv[])
{
	runobject();
	printf("end\n");
	getchar();

	return 0;
}

