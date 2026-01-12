//program for grading system using if-else...
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks: ";
    cin>>marks;
    if(marks>100)
       cout<<"Invalid marks";
    if(marks<30)
       cout<<"Fail";
    else if(marks>=30&&marks<45)
        cout<<"Grade=D"; 

    else if(marks>=45&&marks<60)
        cout<<"Grade=c";
    
    else if(marks>=60&&marks<75)
        cout<<"Grade=B"; 
    else
         cout<<"Grade=A";  
    return 0;     
}
