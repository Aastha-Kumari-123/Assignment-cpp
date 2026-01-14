//Program for Hierarchial inheritance...
#include<iostream>
using namespace std;
//base class
class Person
{
    public:
    void show(){
        cout<<"This is a person"<<endl;
    }
};
//Derived class1
class Student:public Person{
    public:
    void study(){
        cout<<"Students are studying"<<endl;
    }
};
//Derived class2
class Teacher:public Person{
    public:
    void teach(){
        cout<<"Teacher is teaching"<<endl;
    }
};
int main()
{
    Student s;
    Teacher t;

    s.show();
    s.study();

    t.show();
    t.teach();

    return 0;

}