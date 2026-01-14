//Program with friend function accessing private data...
//Friend function is a non-member function that has access to the private and protected members of your class..
#include<iostream>
using namespace std;
class Emp_details
{
    private:
       string name;
       string department;
       int salary;
    public:
        //used constructor initializer list to initialise data..
        Emp_details(string n,string dep,int sal):name(n),department(dep),salary(sal)
        {}
        
        //friend function declaration..
        friend void get_data(Emp_details e);
};
//friend function definition..
void get_data(Emp_details e)
{
    //friend function accesing private data...
    cout<<"Employee name is "<<e.name<<endl;
    cout<<"Employee department is "<<e.department<<endl;
    cout<<"Employee salary is "<<e.salary<<endl;

}
int main()
{
    Emp_details E1("Aastha Kumari","CS",89000);
    get_data(E1);
    return 0;
}