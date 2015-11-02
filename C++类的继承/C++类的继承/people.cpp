#include "stdafx.h"
#include "people.h"

people::people(){
	this->age = 10;
    this->sex = 1;	
}	//如果未指定继承的构造方法，就执行默认的构造方法

people::people(int age,int sex){
	this->age=age;
	this->sex=sex;
}

int people::getAge(){
	return this->age;
}
void people::mysay(){
	printf("LuckyNum\n");
	getchar();	//使程序进入等待
}

int people::getSex(){
	return this->sex;
}
