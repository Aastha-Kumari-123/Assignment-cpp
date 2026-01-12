//Program to read and display employee details using class...
#include<iostream>
using namespace std;
class Employee
{
   private:
      int emp_salary;
   public:
      string emp_name;
      string emp_dept;
      int emp_mobile_no ;

    void display()
    {
        cout<<"Employee name: "<<emp_name<<endl;
        cout<<"Employee's department: "<<emp_dept<<endl;
        cout<<"Employee's mobile number: "<<emp_mobile_no<<endl;
    }
    void setSalary(int s)
    {
         emp_salary=s;
    }
    int getsalary()
    {
        return emp_salary;
    }
};
int main()
{
    Employee E1;
    E1.emp_name="Ram Sharma";
    E1.emp_dept="Fitter";
    E1.emp_mobile_no=564326797;
    E1.display();
    E1.setSalary(100000);
    cout<<"Employee's salary is:"<<E1.getsalary()<<endl;
    return 0;
}