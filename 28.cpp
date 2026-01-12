//Program using do-whle to print number series...
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number from 1 to "<<n<<endl;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=n);
        cout<<endl;
        return 0;
}