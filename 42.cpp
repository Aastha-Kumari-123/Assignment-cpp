//Program with private and public member function...
#include<iostream>
using namespace std;
class Employee
{
    private:
      float emp_salary;

    public:
      string emp_name;
      int emp_age;

    void fun()
    {
        cout<<"Employee name is: "<<emp_name<<endl;
        cout<<"Employee age is: "<<emp_age;
    }

};
int main()
{
    Employee E1;
    E1.emp_name="Manish Sharma";
    E1.emp_age=28;
    E1.fun();
    return 0;
}