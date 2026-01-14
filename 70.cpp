//Program using friend to swap private values...
#include<iostream>
using namespace std;
class student
{
   private:
      int marks;

    public:
       void setMarks(int m){
         marks=m;
       }  
    void display(){
          cout<<"Marks="<<marks<<endl;
    }
    //friend function
    friend void swapMarks(student &s1,student &s2);
};
//Friend function definition..
void swapMarks(student &s1,student &s2)
{
    int temp;
    temp=s1.marks;
    s1.marks=s2.marks;
    s2.marks=temp;
}
int main(){
    student s1,s2;
    s1.setMarks(96);
    s2.setMarks(93);

    cout<<"Before swaping:"<<endl;
    s1.display();
    s2.display();

    swapMarks(s1,s2);
    cout<<"\nAfter swapping:"<<endl;
    s1.display();
    s2.display();
    return 0;
}