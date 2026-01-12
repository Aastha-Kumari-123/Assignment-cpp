//Program to demonstrate basic pointer pointer operation...
//Adittion of two numbers using pointer approach..
#include<iostream>
using namespace std;
int main()
{
    int a,b,*p,*q;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    p=&a;  //&a=memory address of a
    q=&b;  //&b=memory addres of b
    cout<<p;
    int c=*p+*q;  //*p=value at p   *q=value at q
    cout<<"\naddition of two numbers="<<c;
    return 0;
}                                                                         