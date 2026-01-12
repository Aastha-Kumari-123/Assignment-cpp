//Program to input and display array elements...
#include<iostream>
using namespace std;
int main()
{
   int arr[5];
   cout<<"Enter elements in an array:"<<" ";
   for(int i=1;i<=5;i++)
   {
      cin>>arr[i];
   }
   cout<<"entered elements in array are: "<<" ";
   for(int i=1;i<=5;i++)
   {
      cout<<arr[i]<<" ";
   }
   return 0;
}
