//Program defining a simple class and creating objects...
#include<iostream>
using namespace std;
class Box  //class named as Box
{
    public:    //format specifier
       int length;
       void show() 
       {
        cout<<"length:"<<length<<endl;
       }
    
};
int main()
{
    Box b1;  //b1 is object
    b1.length=15;  //length of b1 is 15

    b1.show();
    return 0;
    
}