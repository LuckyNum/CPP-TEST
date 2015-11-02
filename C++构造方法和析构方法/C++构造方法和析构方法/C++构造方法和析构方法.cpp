// C++构造方法和析构方法.cpp : 定义控制台应用程序的入口点。
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
	printf("runObject end\n");	//在这个函数里使用完obj后，就执行~object()清除obj（局部变量）
}

int _tmain(int argc, _TCHAR* argv[])
{
	runobject();
	printf("end\n");
	getchar();

	return 0;
}

