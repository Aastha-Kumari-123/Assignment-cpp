//Program to demonstrate break and continue statement...
//break:Exit the loop immediatly.
//continue: Skips the current iteration and move to the next iteration.

#include<iostream>
using namespace std;
int main()
{   
    int r,n;
    cout<<endl<<"Enter the range: ";
    cin>>r;
    cout<<"Enter any number under range by which you wanted to terminate the loop:"<<endl;
    cin>>n;
    for(int i=1;i<=r;i++)
    {
        if (i==n)
        {
            break;
        }
        cout<<i<<" ";
    }
    int p,m;
    cout<<"Enter the range: ";
    cin>>p;
    cout<<"Enter the number under range which you want to skip:"<<endl;
    cin>>m;
    for(int i=1;i<=p;i++)
    {
        if (i==m)
        {
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}