//Program for hybrid Inheritance...
#include<iostream>
using namespace std;

class Person
{
    public:
    void show()
    {
        cout<<"Person"<<endl;
    }
};
class Student:virtual public Person{};

class Employee:virtual public Person{};

class WorkingStudent:public Student,public Employee{};

int main()
{
    WorkingStudent ws;
    ws.show();

    return 0;
}