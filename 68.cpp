//Program to compare private data of two classes using friend..
#include<iostream>
using namespace std;
class B;  //forwaed declaration.

class A
{
    int a;
    public:
      A(int x):a(x){}
      friend void compare(A,B);
};
class B
{
    int b;
    public:
      B(int y):b(y){}
      friend void compare(A,B);
};

void compare(A p, B q)
{
      if(p.a>q.b)
         cout<<"A is larger"<<endl;
      else if(q.b>p.a)
         cout<<"B is larger"<<endl;
      else
          cout<<"both are equal"<<endl;       
}
int main()
{
    A ob1(78);
    B ob2(56);
    compare(ob1,ob2);
    return 0;
}