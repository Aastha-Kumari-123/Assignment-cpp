//Program with pure virtual and abstract class...
#include<iostream>
using namespace std;
//Abstract class..
class Shape{
    public:
       //Pure virtual function
       virtual void area()=0;
};
class Circle: public Shape{
    public:
       void area()
       {
          int r=5;
          cout<<"Area of circle="<<3.14*r*r<<endl;
       }
};
class Rectangle: public Shape{
    public:
       void area()
       {
          int l=8,b=5;
          cout<<"Area of circle="<<l*b<<endl;
       }
};
int main()
{
     Shape *s;
     Circle c;
     Rectangle r;

     s=&c;
     s->area();   //Circle's area 

     s=&r;
     s->area();   //Rectangle's area

     return 0;
}


