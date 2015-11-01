// cpplesson2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "people.h"


int _tmain(int argc, _TCHAR* argv[])
{
	lch::people *p=new lch::people();
	p->mysay();

	return 0;
}

