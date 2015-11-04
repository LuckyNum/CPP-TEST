#pragma once
class people
{
private:
    int age;
    int sex;
    
public:
    people();
    people(int age,int sex);
    int getAge();
    int getSex();
    virtual void sayHello();
    virtual void eat()=0;
};

