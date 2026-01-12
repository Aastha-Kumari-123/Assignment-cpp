//Program to demonstrate incremnent and decrement operator...
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"initial value of a is: "<<a<<endl;
    cout<<"The value of a after post increment(a++)is=: "<<a++<<endl;
    cout<<"The value of a after pre increment(++a)is=: "<<++a<<endl;
    cout<<"The value of a after pre decrement(--a)is=: "<<--a<<endl;
    cout<<"The value of a after post decrement(a--)is=: "<<a--<<endl;
    cout<<a;
    return 0;
}