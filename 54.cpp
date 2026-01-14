//Program with Copy constructor..
#include<iostream>
using namespace std;
class A
{
  private:
     int a,b;
  public:
     A(int x,int y) 
     {
        a=x;  b=y;
     } 
     A(A &ref) //Copy constructor is created..
     {
        a=ref.a;
        b=ref.b;
     }
     void display()
    {
       cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj(50,80);
    A obj2(obj);   //Copy constructor is called..
    obj.display();
    obj2.display();
    return 0;
}