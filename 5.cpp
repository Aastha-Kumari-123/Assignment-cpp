//program using const keyword
#include<iostream>
using namespace std;
int main()
{
    const float PI=3.141;   //declearing a constant value if PI ie 3.14
    int radius;
    cout<<"enter radius of a circle: ";
    cin>>radius;
    cout<<"circumference of a circle is:"<<2*PI*radius;
    return 0;
}