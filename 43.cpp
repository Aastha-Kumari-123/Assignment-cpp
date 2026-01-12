//Program to demonstrate class member function...
#include<iostream>
using namespace std;
class Rectangle
{
    public: 
      int length;
      int width;
       int area() //Member function
       {
         return length*width;
       } 
};
int main()
{
    Rectangle R1;
    R1.length=5;
    R1.width=2;
    cout<<"Area of Rectangle= "<<R1.area()<<endl;
    return 0;
}