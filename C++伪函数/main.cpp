/*
 * main.cpp
 *
 *  Created on: 2015Äê11ÔÂ4ÈÕ
 *      Author: Lenovo
 */

#include <iostream>

using namespace std;

void hello(){
    cout<<"hello"<<"\n";
}

class Hello {
    
public:
    void operator()(){
        cout<<"hello CPP"<<"\n";
    }
};


int main(int argc, const char * argv[])
{
    
    hello();
    
    Hello h;
    h();

    return 0;
}
