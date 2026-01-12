//Program using while loop to print table...
//Eg. Table of 9: 9,18,27,36,45,54,63,72,81,90,....
#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter whose table you wanted to print:";
    cin>>t;
    int start=t;
    int n;
    cout<<"enter no of terms:";
    cin>>n;
    while(n>0)
    {
        cout<<start<<" ";
        start+=t;
        n--;
    }
    return 0;

}
