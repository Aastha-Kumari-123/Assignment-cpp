//Program with constant object...
#include<iostream>
using namespace std;

class Test{
    public:
       void showMessage()const{
           cout<<"hello from const object!"<<endl;
       }
};
int main()
{
    const Test t;
    t.showMessage();
    return 0;
}