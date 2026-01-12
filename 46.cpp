//Program to compare two objects...
#include<iostream>
using namespace std;
class Student
{
    public:
      string name;
      int marks;
      Student(string n,int m)
      {
          name=n;
          marks=m;
      }
      int compare(Student s1,Student s2)
      {
        if (s1.marks>s2.marks)
            return 1;
        else if(s1.marks==s2.marks)    
            return 0;
      }
};
int main()
{
    Student s1("Ravi",85);
    Student s2("Shyam",85);
    int t=s1.compare(s1,s2);
    if(t==1)
       cout<<s1.name<<" is better";
    else if(t==0)
       cout<<"Both are equally better";
    else 
    cout<<s2.name<<" is better";
    return 0;   
}