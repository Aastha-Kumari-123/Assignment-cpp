//Program to find largest of two numbers using class...
#include<iostream>
using namespace std;
class Compare
{
    public:
       int num1,num2;
       Compare(int a,int b)
       {
        num1=a;
        num2=b;
          
          if(num1>num2)
            cout<<num1<<" is greater";
          else
             cout<<num2<<" is greater";  
       }
 };
int main()
{
    int n1,n2;
    cout<<"Enter 1st number:";
    cin>>n1;
    cout<<"Enter 2nd number:";
    cin>>n2;

    Compare c1(n1,n2);
    return 0;
}