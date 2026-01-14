//Program to demonstrate this pointer...
#include<iostream>
using namespace std;
class Account
{
    private:
       int acc_no, acc_bal;
    public:   
       Account(int acc_no, int  acc_bal)  
       {
        this->acc_no=acc_no;   //this pointer is used to differentiate between a class data member and function parameter with the same name.
        this->acc_bal=acc_bal;
       } 
       void display()
       {
        cout<<"Account number="<<acc_no <<endl<<"Account balance="<<acc_bal;
       }
};
int main()
{
    Account a1(65,500);
    a1.display();
    return 0;
}