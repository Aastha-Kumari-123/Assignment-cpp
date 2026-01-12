//Program to reverse an array...
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,3,5,7,9,2};
    int start=0;
    int end=5;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<6;i++)
        cout<<"Reversed array is:"<<arr[i]<<" ";
    return 0;    
}