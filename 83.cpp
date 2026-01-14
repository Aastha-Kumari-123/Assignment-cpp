//Program for multiple inheritance...
#include<iostream>
using namespace std;
//Base class 1
class Person{
    string name;
    int age;
    public:
       Person(string n,int a):name(n),age(a){}
       void showPerson(){
           cout<<"name:"<<name<<",Age: "<<age<<endl;
       }
};
//Base class 2
class College{
    string collegeName;
    public:
       College(string c):collegeName(c){}
       void showCollege(){
           cout<<"College:"<<collegeName<<endl;
       }
};
//Derived class
class Student:public Person,public College{
    int rollNo;
    public:
       Student(string n,int a,string c,int r):Person(n,a),College(c),rollNo(r){}

       void showStudent(){
        showPerson();
        showCollege();
        cout<<"Roll No: "<<rollNo<<endl;
    
       }
};
class Teacher:public Person,public College{
    string subject;
    public:
    Teacher(string n, int a,string c,string s):Person(n,a),College(c),subject(s){}

    void showTeacher(){
        showPerson();
        showCollege();
        cout<<"Subject: "<<subject<<endl;
    }
};
int main()
{
    Student s1("Aastha",20,"Vivek Vidyalaya",101);
    Teacher t1("Mr.Shankar",35,"Vivek vidyalaya","OOPS");

    cout<<"Student Info:"<<endl;
    s1.showStudent();
    cout<<"Teacher Info: "<<endl;
    t1.showTeacher();
    return 0;
}
