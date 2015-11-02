#include "stdafx.h"
#include "people.h"


people::people(){
    this->age = 10;
    this->sex = 1;
}

people::people(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int people::getAge(){
	return this->age;
}

int people::getSex(){
	return this->sex;
}

void people::sayHello(){
	printf("hello cpp\n");
}