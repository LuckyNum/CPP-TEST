/*
 * C++����.cpp
 *
 *  Created on: 2015��11��5��
 *      Author: Lenovo
 */

#include <iostream>

 class point
 {
 private:
 	int x,y;
 public:
 	point(int x,int y){
 		this->x=x;
 		this->y=y;
 	}

 	int getX(){
 		return x;
 	}

 	int getY(){
 		return y;
 	}

/* 	void add(point p){
 		this->x+=p.x;
 		this->y+=p.y;
 	}
*/
 	void add(point &p){
 		this->x+=p.x;
 		this->y+=p.y;
 	}

 };

 int main(int argc, char const *argv[])
 {
// 	point p(1,1);
//	p.add(point(1,1));


 	point p(1,1);
 	point p1(2,2);
 	p.add(p1);	//ָ������ã�ֻ�����׵�ַ�������ǿ�����


 	std::cout<<p.getY()<<"\n";

 	return 0;
 }


