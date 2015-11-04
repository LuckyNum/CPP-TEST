//============================================================================
// Name        : C++操作符重载.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class Point {

private:
    int x,y;

public:

    Point(int x,int y){
        this->x = x;
        this->y = y;
    };

    int getX(){
        return this->x;
    }

    int getY(){
        return this->y;
    }

    void add(Point p){
        add(p.getX(), p.getY());
    }

    void add(int x,int y){
        this->x+=x;
        this->y+=y;
    }

    void operator+=(Point p){
        add(p);
    }	//操作符重载
};

int main() {
	Point p(10,10);
    p.add(Point(12, 12));	//函数应用
    p+=Point(13, 13);	//操作符应用

	cout << p.getY()<<"\n";

	Point *m=new Point(6,5);
	*m+=Point(5,6);
	cout << m->getY()<<"\n";
	return 0;
}
