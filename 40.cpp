/*Program using structure to store students details...
Structure is a user defined datatypes which is used to store 
different types of data under a single unit*/
#include<iostream>
using namespace std;
struct Student   //struct keyword is used for creating structure.
{
    char stu_name[50];
    int stu_roll;
    int stu_marks;
    char grade;

};
int main()
{
    struct Student a[3];
    //input students details..
    for(int i=0;i<5;i++)
    {
        cout<<"enter details of student "<<i+1<<endl;
        cout<<"Enter name:";
        cin.getline(a[i].stu_name,50);
        cout<<"Enter roll no: ";
        cin>>a[i].stu_roll;
        cout<<"Enter marks: ";
        cin>>a[i].stu_marks;
        cout<<"enter grade: ";
        cin>>a[i].grade;
        cin.ignore();
    }
    //display students details..
    cout<<"\nstudents details are:\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Name:"<<a[i].stu_name<<endl;
        cout<<"Roll no="<<a[i].stu_roll<<endl;
        cout<<"Marks obtained="<<a[i].stu_marks<<endl;
        cout<<"Grade obtained="<<a[i].grade<<endl;
    }
    return 0;
}