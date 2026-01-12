//Progam using nested if ...
//To find the maximum of three numbers..
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c:  ";   //a=12,b=6,c=46    
    cin>>c;
    if(a>b){
        if(a>c)
          cout<<"a is largest";
        else
           cout<<"c is largest";
    }
    else{
        if(b>c)
           cout<<"b is largest";
        else
            cout<<"c is largest";   
    }
    return 0;

}