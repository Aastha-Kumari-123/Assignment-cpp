/*program with default constructor...
Default constructor --> not receving any value .These empty constructureare called when object 
is created.*/
#include<iostream>
using namespace std;
class number
{
    private:
       int a,b;
    public:
       number()
       {
           a=10;
           b=15;
       }
       void show(){
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
       }
};
int main()
{
    number n1;
    n1.show();
    return 0;
}