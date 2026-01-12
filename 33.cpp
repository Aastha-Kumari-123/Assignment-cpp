//Second largest element in an array...
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6]={2,5,3,7,6,9};
    int max=arr[0] ;
    for(int i=1;i<6;i++)
    {
        if (arr[i]>max)
          max=arr[i];
    }
    cout<<"Largest element="<<max<<endl;

    int secMax=INT_MIN;
    for(int i=0;i<6;i++)
    {
        if (arr[i]>secMax&&arr[i]!=max)
          secMax=arr[i];
    }
    cout<<"second largest element in an array is:"<<secMax<<endl;
    return 0;

}