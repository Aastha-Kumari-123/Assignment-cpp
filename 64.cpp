//Program with two classes and a common friend function...
#include<iostream>
using namespace std;
class Two;  //Forward declearation..

class One
{
    private:
    int num1;
    public:
    One(int x):num1(x) {} //constructor initializer list
    
    friend void add_num(One o1, Two o2); //friend function declaration.
};
class Two
{
    private:
    int num2;
    public:
    Two(int y):num2(y) {}  //constructor initializer list
    
    
    friend void add_num(One o1, Two o2);
};
//friend function definition...
void add_num(One o1, Two o2)
{
    cout<<"addition of two numbers is:"<<o1.num1+o2.num2<<endl;
}
int main()
{
    One obj1(50);
    Two obj2(45);
    add_num(obj1,obj2);
    return 0;
}

