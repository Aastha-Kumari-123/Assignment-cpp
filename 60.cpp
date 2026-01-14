//Program to initialize static data member...
#include<iostream>
using namespace std;
class Display
{
    int a;
    static int b;  //b is static data member,memory will be allocated only once for b..
    public:
       Display(int x,int y)
       {
        a=x;
        b=y;
       }
       void show()
       { 
        cout<<a<<" "<<b<<endl;
       }
       static void disp()
       {
        cout<<b<<endl;   //a is not accessible here..
       }
};
//initializing static data member with 0..
int Display::b=0;
int main()
{
    Display D1(50,100);
    Display D2(10,20);
    D1.show();
    D2.show();
    Display::disp();  
    return 0;
}