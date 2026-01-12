//Program to check if a number is positive,negative or zero...
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number:";
    cin>>n;
    if(n>0)
       cout<<"positive number";
    else if(n<0)
        cout<<"negative number";
    else
        cout<<"The number is zero(0)";
        
    return 0;    

}