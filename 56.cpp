//program with destructor showing objects destructiion...
#include<iostream>
using namespace std;
class Array
{
   public:
   int *arr;  // *arr is a pointer, arr is used as a dynamic array
   Array(int size)
   {
       arr=new int[size];
       cout<<"Array allocated at runtime"<<endl;
       //bcz we used new keyword and pointer will keep the addres of the memory allocated at run time(dynamically)."<<endl;
   }
   ~Array()  //destructor created
   {
    cout<<"Objects destruction happening now"<<endl;
    delete[]arr; //delete is to clean the memory allocated with the help of pointer and new keyword i.e dynamically. 
    cout<<"Memory deallocated";
   }
};
int main()
{
    int s;
    cout<<"enter size of array: "<<endl;
    cin>>s;
    Array a(s);   //a is object variable.
    return 0;
}