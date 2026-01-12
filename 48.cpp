//Program to calculate area using class objects...
#include<iostream>
using namespace std;
class Area
{
   private:
      int length,width;
    public:
        Area(int l, int b){
            length=l;
            width=b;
        }
        int calArea(){
            return(length*width);
        }
};
int main()
{
    Area a1(5,4);
    cout<<"area of rectangle="<<a1.calArea()<<endl;
    return 0;
}