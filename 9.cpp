//Program to compute the area ofcircle,triangle and rectangle...
#include<iostream>
using namespace std;
int main()
{
    float radius,base,height,length,breath;
    cout<<"enter radius of a circle: ";
    cin>>radius;
    cout<<"Area of circle= "<<3.141*radius*radius<<endl;

    cout<<"enter base of a triangle: ";
    cin>>base;
    cout<<"enter height of a triangle: ";
    cin>>height;
    cout<<"Area of triangle= "<<0.5*base*height<<endl;

    cout<<"enter length of a rectangle: ";
    cin>>length;
    cout<<"enter breath of a rectangle: ";
    cin>>breath;
    cout<<"Area of rectangle= "<<length*breath<<endl;
    return 0;

}