//Program to check leap year...
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year: ";
    cin>>year;
    if(year%4==0)
    {
        if(year%400==0||year%100!=0)
          cout<<"leap year";
        else  
           cout<<"not a Leap year";  
    }
    else 
       cout<<"not a Leap year";
    
    return 0;   
}
