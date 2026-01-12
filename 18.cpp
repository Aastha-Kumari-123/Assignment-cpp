//Program to evaluate algebric expression..
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"(a=b)^2= "<<(a*a)+(b*b)+2*a*b;
    return 0;
}