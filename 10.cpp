//Demonstration of type casting...
#include<iostream>
using namespace std;
int main()
{
    float x;
    cout<<"enter any floating point number: ";
    cin>>x;
    x=(int)x;  //type casting is used here to convert float datatype into integer .
    cout<<x;
    return 0;
}