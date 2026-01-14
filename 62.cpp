//program to differentiate local and member variables using this...
#include<iostream>
using namespace std;
class Student
{
   int age;  //member variable
   public:
       void set_age(int age)
       {
        //here, age is local variable(function parameter)
           this->age=age; //this->age refers to the member variable of class
       }
       void get_data()
       {
        cout<<"your age is:"<<age<<endl;
       }
};
int main()
{
   Student s1;
   int x;
   cout<<"Enter youe age:"<<endl;
   cin>>x;
   s1.set_age(x); 
   s1.get_data();
   return 0;
}