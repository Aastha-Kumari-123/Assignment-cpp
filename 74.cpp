//Program with constant member function...
#include<iostream>
using namespace std;

class Box{
     private:
       int width;
    public:
       Box(int w):width(w){}

       int getWidth()const{    //const member function..
        return width;
       }
    };
    int main(){
         Box b(25);
         cout<<"Box width:"<<b.getWidth()<<endl;
         return 0;
    }
