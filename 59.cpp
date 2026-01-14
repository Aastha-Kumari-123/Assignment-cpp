//program to initialize const data member in a constructor...
#include<iostream>
using namespace std;
class Product 
{
    const int product_id;  //const means variable can't be changed once initialized.
    public:
       //const member must be initialized in constructor initializer list..
       Product(int id):product_id(id){ //initializer list created..
         cout<<product_id;
       }
};
int main()
{
    Product P1(102);
    return 0;
}