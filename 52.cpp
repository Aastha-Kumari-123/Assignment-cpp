//Program with Parameterized constructur...
#include<iostream>
using namespace std;
class add{
    int num1,num2;
    public:
    add(int num1,int num2){  //Paramerterized constructur.
        this->num1=num1;
        this->num2=num2;
        cout<<"addition of two numbers="<<num1+num2;
    }
    
};
int main()
{
    add obj(5,6);
    return 0;
}
