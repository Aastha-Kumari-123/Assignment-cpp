//Program demonstrating run time polymorphism...
#include<iostream>
using namespace std;
class Animal
{
    public:
        virtual void sound(){
            cout<<"Animal makes sound"<<endl;
        }
};
class Dog:public Animal{
     public:
         void sound()
         {
            cout<<"Dog barks"<<endl;
         }
};
class Cat:public Animal
{
     public:
        void sound()
        {
            cout<<"Cat meows"<<endl;
        }
};
int main()
{
    Animal *a;

    Dog d;
    Cat c;

    a=&d;
    a->sound();   //Dog barks
  
    a=&c;
    a->sound();   //cat meows

    return 0;
}