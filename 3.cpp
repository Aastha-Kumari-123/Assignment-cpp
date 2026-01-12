//swaping of two numbers using third variable...
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter first number ie a:";
    cin>>a;
    cout<<"enter second number ie b:";
    cin>>b;
    cout<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"the value of a after swaping is:"<<a<<endl;
    cout<<"the value of b after swaping is:"<<b;
    return 0;
}