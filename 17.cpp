//program using conditional(ternary) operator...
//condition? exp_if_true : exp_if_false
#include<iostream>
using namespace std;
int main()
    {
        int age;
        cout<<"enter age: "<<endl;
        cin>>age;
        (age>=18)?(cout<<"Eligible to cast vote"):(cout<<"Not eligible to cast vote");
        return 0;
    }
