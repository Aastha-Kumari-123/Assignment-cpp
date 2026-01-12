//program demonstrating nested classes...
#include<iostream>
using namespace std;
class cuboid   //outer class
{
    public:
      class box   //inner class
      {
          private:
              int length,width,height;
          public:
              void input()
              {
                cout<<"enter length,width and height of box: ";
                cin>>length>>width>>height;
         
                if(length==width&&width==height)
                     cout<<"box is cube";
                else 
                     cout<<"box is cuboid";  
              };
      };
};
    int main()
    {
        cuboid::box b1;  //::is scope resolution operator
        b1.input();
        return 0;
    }