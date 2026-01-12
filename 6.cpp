//program to calculate simple interest...
#include<iostream>
using namespace std;
int main()
{
    // formula: SI=(P*T*R)/100
    int P,T,R;
    cout<<"enter principle amount: ";
    cin>>P;
    cout<<"enter no of years: ";
    cin>>T;
    cout<<"enter rate: ";
    cin>>R;
    
    cout<<"SI= "<<(P*T*R)/100;
    return 0;

}