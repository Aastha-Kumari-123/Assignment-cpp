//Program to count number of objects using static variable...
#include<iostream>
using namespace std;
class counter
{
    private:
        static int c;   //static data member can be initialized only once in whole program.
                         //if we don't provide any initial value to it;it initialises itself automatically by 0.
    public:
        counter(){
            c++;
        }  
        void display()
        {
               cout<<c<<endl;
        }                     
};

int counter::c=0;
int main()
{
    counter a,b,c;
    a.display();
    return 0;
}
