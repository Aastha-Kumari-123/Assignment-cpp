//Program dynamic object creation and deletion using new/delete...
#include<iostream>
using namespace std;

class Student{
  public:
    int roll;
    Student(int r)
    {
        roll=r;
        cout<<"Student object created/Roll="<<roll<<endl;
    }
    ~Student()
    {
         cout<<"Student object deleted"<<endl;
    }
};

int main(){
    //Dynamic object creation..
    Student *s=new Student(51);

    //Dynamic object deletion
    delete s;

    return 0;
    
}

   