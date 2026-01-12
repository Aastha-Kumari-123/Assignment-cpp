//Program to show the us e of goto statement...
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any positive number: ";
    cin>>n;
    if(n<0)
       goto mistake;
    cout<<"Number you entered is:"<<n<<endl;
    return 0;
    
mistake:
     cout<<"Error:You have entered negative number!";
     return 1; 
}