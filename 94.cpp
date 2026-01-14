//Program using inheritance for student marks processing...
#include<iostream>
using namespace std;

class Student
{
    protected:
       int roll,m1,m2,m3;
    public:
       void input()
       {
          cout<<"Enter Roll No and 3 marks: "<<endl;
          cin>>roll,m1,m2,m3;
       }
};
class result : public Student{
    public:
       void show()
       {
         int total=m1+m2+m3;
         cout<<"Roll No: "<<roll<<endl;
         cout<<"Total: "<<total<<endl;
         cout<<"Percentage: "<<total/3.0<<endl;

       }
};
int main()
{
    result r;
    r.input();
    r.show();
    return 0;
}