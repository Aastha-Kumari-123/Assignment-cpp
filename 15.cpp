//Program to demonstrate bitwise operator(&,|,~,^,<<,>>)..
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<"value of a is= "<<a<<endl<<"value of b is= "<<b<<endl;
    
    //showing use of biteise operators..
    cout<<"(a&b)= "<<(a&b)<<endl;  //bitwise AND
    cout<<"(a|b)= "<<(a|b)<<endl;  //bitwise OR
    cout<<"(a^b)= "<<(a^b)<<endl;  //bitwise XOR
    cout<<("~a=")<<(~a)<<endl;     //bitwise NOT
    cout<<("a>>2=")<<(a>>2)<<endl;  //bitwise Left shift
    cout<<("b<<2=")<<(b<<2)<<endl;  //bitwise Right shift
    return 0;
}