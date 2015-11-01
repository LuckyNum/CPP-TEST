// cpplesson2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "people.h"

using namespace lch;

int _tmain(int argc, _TCHAR* argv[])
{
	people *p=new people();
	p->mysay();

	return 0;
}

