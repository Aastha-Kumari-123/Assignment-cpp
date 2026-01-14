//Program to demonstrate Constructor overloading(same name but different parameter lists)..
#include<iostream>
using namespace std;
class shapes
{
    int length,width,side;
    float radius;
    public:
         shapes(int x,int y)
         {
            length=x;  width=y;
            cout<<"area of rectangle="<<length*width<<endl;
         }
         shapes(int a){
            side=a;
            cout<<"Volume of cube="<<a*a*a<<endl;
         }
         shapes(float r){
            radius=r;
            cout<<"Area of Circle="<<3.14*radius*radius;
         }
};
int main(){
    shapes s1(5,3);
    shapes s2(7);
    shapes s3(2.8f); // 'f' is suffix for float.
    return 0;
}