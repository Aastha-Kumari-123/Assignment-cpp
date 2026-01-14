//Program with static data member...
#include<iostream>
using namespace std;

class Student
{
    public:
      static int count;  //static data member

      Student(){
           count++ ; //incremented when object is created
      }
};
int Student::count=0; //define static member

int main()
{
   Student s1;
   Student s2;
   Student s3;
   Student s4;
   Student s5;

   cout<<"Total students:"<<Student::count<<endl;
   return 0;
}
