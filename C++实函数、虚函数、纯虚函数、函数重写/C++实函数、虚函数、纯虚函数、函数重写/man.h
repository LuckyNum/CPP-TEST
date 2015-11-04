#pragma once
#include "people.h"

class Man:public people {
    
public:
    Man(int age);
    virtual void sayHello();
    virtual void eat(){
        printf("Man eat\n");
    }
};
