//Program to find the length of string without using liberary function...
#include<iostream>
#include<string>  //not mandatory to use this function..
using namespace std;
int main()
{
    char str[100];
    int length=0;
    cout<<"enter your string: ";
    cin.getline(str,100); //getline() will handle spaces.
    while(str[length]!='\0')
    {
        length++;
    }
    cout<<"length of string is: "<<length<<endl;
    return 0;
}