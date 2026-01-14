//Program showing friendship is not mutual...
#include<iostream>
using namespace std;
class Bank;
class custumer{
public:
   void checkBalance(Bank& b);
};
class Bank{
    int balance=780;
    public:
        friend void custumer::checkBalance(Bank&);
};
void custumer::checkBalance(Bank& b){
     cout<<"Balance is Rs."<<b.balance<<endl;
}
int main()
{
    Bank b1;
    custumer c1;
    c1.checkBalance(b1);
    return 0;
}