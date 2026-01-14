//Program for single inheritance...
#include<iostream>
using namespace std;
class person{
    public:
       string name;
       int age;
       void info(string n,int a){
        name=n;
        age=a;
       }
};
class student:public person{
    public:
        int roll=01;
        void display(){
               cout<<"name="<<name<<endl;
               cout<<"age="<<age<<endl;
               cout<<"roll="<<roll<<endl;
        }
};
int main(){
    student s;
    s.info("Anshu",19);
    s.display();

    return 0;
}