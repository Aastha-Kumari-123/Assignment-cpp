//Program for virtual base class...
#include<iostream>
using namespace std;
class A
{
   public:
       A()
       {
           cout<<"Class A constructor"<<endl;
       }
};
class B: virtual public A
{
   public:
       B()
       {
           cout<<"Class B constructor"<<endl;
       }
};
class C: virtual public A
{
   public:
       C()
       {
           cout<<"Class C constructor"<<endl;
       }
};
class D: virtual public B,public C
{
   public:
       D()
       {
           cout<<"Class D constructor"<<endl;
       }
};
int main()
{
    D obj;
    return 0;
}