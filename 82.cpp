//Program for multilevel inheritance...
#include<iostream>
using namespace std;

class Person{
    public:
      void showPerson(){
         cout<<"I am a Person"<<endl;
      }
};
class Employee:public Person{
    public:
       void showEmployee(){
             cout<<"I am an employee"<<endl;
       }
};
class Manager:public Employee{
    public:
       void showManager(){
        cout<<"I manage the office"<<endl;
       }
};
int main(){
    Manager m;
    m.showPerson();
    m.showEmployee();

    m.showManager();
    return 0;
}
