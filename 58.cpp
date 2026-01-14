//Program to dynimically allocate memory to constructor...
#include<iostream>
using namespace std;
class chocolates
{
    public:
    int *arr;
    chocolates(int size){
    arr=new int[size];  //new keyword help in dynamic memory allocation.
    cout<<"Memory allocated dynamically at runtime.."<<endl;
    }
    ~chocolates()
    {
        delete[] arr;   //delete free up the memory allocated.
        cout<<"memory deallocated"<<endl;
    }
};
int main()
{
    int s;
    cout<<"enter size: "<<endl;
    cin>>s;
    chocolates c1(s);
    return 0;
}
