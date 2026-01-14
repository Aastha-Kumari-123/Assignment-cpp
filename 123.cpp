//Program demonstrating get() and put()...
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enetr a character: "<<endl;
    ch=cin.get();
    cout<<"You entered: "<<endl;
    cout.put(ch);
    return 0;
}