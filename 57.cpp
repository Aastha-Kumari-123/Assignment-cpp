//Program to show the order of constructor execution...
#include<iostream>
using namespace std;
class first 
{
    public:
    first(){
         cout<<"first constructor is called"<<endl;
    }
      
};
class second:public first  //goes to cons. first as it is it's base class constructor.
{
   public:
   second(){
       cout<<"second constructor is called"<<endl;
   }
};
class third:public second  //goes to cons. second as it is it's base class constructor.
{
    public:
    third(){
          cout<<"third constructor is called"<<endl;
    }
};
int main()
{
    third t;  //goes to cons. third 
    return 0;
}