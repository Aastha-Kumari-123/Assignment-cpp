//Program demonstrating private inheritance...
#include<iostream>
using namespace std;
class Person
{
    public:
        void showPerson(){
            cout<<"This is a person"<<endl;
        }
};
class Student:private Person{
    public:
       void showStudent()
       {
        cout<<"This is a student"<<endl;
        showPerson();
       }
       
};
int main(){
    Student s;
    s.showStudent();

    return 0;
}