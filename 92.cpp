//Program showing destructor order in inheritance...
#include<iostream>
using namespace std;
//Base class
class Person
{
    public:
      Person()
      {
        cout<<"Person class constructor is called.."<<endl;
      }
      ~Person()
      {
           cout<<"Person destructor is called"<<endl;
      }
};
//Derived class
class Student:public Person{
    public:
       Student()
       {
           cout<<"Student class constructor is called"<<endl;
       }
       ~Student()
       {
           cout<<"Student destructor is called"<<endl;
       }
};
int main()
{
    Student s;
    return 0;
}