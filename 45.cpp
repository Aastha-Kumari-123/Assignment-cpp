//Program to perform arithmetic operation using class...
#include<iostream>
using namespace std;
class Calculation
{
  public:
     int add(int a,int b)
     {
          return a+b;
     }   

     int sub(int a,int b)
     {
          return a-b;
     }   

     int mult(int a,int b)
     {
          return a*b;
     }
     int div(int a,int b)
     {
        return a/b;
     }
};
int main()
{
    int a,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    Calculation c1;
    cout<<"addition of a and b is: "<<c1.add(a,b)<<endl;
    cout<<"substraction of a and b is: "<<c1.sub(a,b)<<endl;
    cout<<"Multiplication of a and b is: "<<c1.mult(a,b)<<endl;
    cout<<"Division of a and b is: "<<c1.div(a,b)<<endl;
    return 0;
}


