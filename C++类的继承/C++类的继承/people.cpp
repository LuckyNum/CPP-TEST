#include "stdafx.h"
#include "people.h"

people::people(){
	this->age = 10;
    this->sex = 1;	
}	//���δָ���̳еĹ��췽������ִ��Ĭ�ϵĹ��췽��

people::people(int age,int sex){
	this->age=age;
	this->sex=sex;
}

int people::getAge(){
	return this->age;
}
void people::mysay(){
	printf("LuckyNum\n");
	getchar();	//ʹ�������ȴ�
}

int people::getSex(){
	return this->sex;
}
