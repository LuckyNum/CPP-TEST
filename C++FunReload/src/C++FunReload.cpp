//============================================================================
// Name        : C++FunReload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

class Hello {

public:
    void sayHello(){
    	std::cout<<"Hello jikexueyuan"<<"\n";
    }	//默认

//    void sayHello(char *name){
//        printf("Hello %s\n",name);
//    }

    void sayHello(std::string name){
        std::string str="Hello ";
        str+=name;

        std::cout<<str<<"\n";
    }	//传入参数函数
};


int main(int argc, const char * argv[])
{

    Hello *h = new Hello();
    h->sayHello("okgoo");
//    std::string name = "ZhangSan";
//    h->sayHello((char*)name.c_str());


    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
