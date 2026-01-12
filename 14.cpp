//Program to demonstrate assignment operator
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter nalue of a: "<<endl;
    cin>>a;
    cout<<"enter nalue of b: "<<endl;
    cin>>b;
    cout<<"enter nalue of c: "<<endl;
    cin>>c;
    cout<<"enter nalue of d: "<<endl;
    cin>>d;

    //copound assignment operators...
    cout<<"new value of a is: "<<(a+=5)<<endl;
    cout<<"new value of b is: "<<(b-=5)<<endl;
    cout<<"new value of c is: "<<(c*=5)<<endl;
    cout<<"new value of d is: "<<(d/=5)<<endl;
    return 0;
}