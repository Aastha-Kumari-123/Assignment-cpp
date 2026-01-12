//Program to copy string manually...
#include<iostream>
using namespace std;
int main()
{
    char str1[100], str2[100];
    int i=0;
    cout<<"enter a string:";
    cin.getline(str1,100);
    //copying a string manually...
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    cout<<"copied string:"<<str2<<endl;
    return 0;
}