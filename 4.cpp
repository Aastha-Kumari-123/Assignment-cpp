//swap two numbers without using third variable...
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"value of a after swapping is:"<<a<<endl;
    cout<<"value of b after swapping is:"<<b<<endl;
    return 0;

}