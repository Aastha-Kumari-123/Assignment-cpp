//Program demonstrating function overloading...
#include<iostream>
using namespace std;
class Calculator{
 public:
     int add(int a,int b)
     {
        return a+b;
     }
     //Function Overloading..
     float add(float a,float b)
     {
        return a+b;
     }
     int add(int a,int b,int c)
     {
        return a+b+c;
     }
};
int main()
{
    Calculator c;
    cout<<"2+5="<<c.add(2,5)<<endl;
    cout<<"8.2+5.7="<<c.add(8.2f,5.7f)<<endl;
    cout<<"2+5+5="<<c.add(2,5,5)<<endl;
    return 0;
}