//Program demonstrating operator overloading..
//Operator overloading is an example of compile_time polymorphism.
#include<iostream>
using namespace std;

class Distance
{
    int meter;
    public:
    //constructor
    Distance(int m=0){
       meter=m;
    }  
    //Overloading+operator
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.meter=meter+d.meter;
        return temp;
    }
    //display function
    void show()
   {
       cout<<"Total Distance:"<<meter<<" meters"<<endl;
   }
};
int main()
{
    Distance r1(450);
    Distance r2(600);
    //Adding two distances
    Distance total=r1+r2;
    total.show();
    return 0;
}