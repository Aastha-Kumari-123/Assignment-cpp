//Program to find largest element in an array..
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={2,5,6,3,7,1};
    int max=arr[0], j=0;
    for(int i=1;i<=6;i++)
    {
        if (arr[i]>max)
          max=arr[i];
          j=i;
    }
    cout<<"Largest element in array is "<<max<<" at index"<<j<<endl;
    return 0;
}