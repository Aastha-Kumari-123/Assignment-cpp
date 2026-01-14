//Program with static member function...
#include<iostream>
using namespace std;

class Counter{
   private:
      static int count;
   public:
      static void showCount(){
         cout<<"Count="<<count<<endl;
      }   
      void increase(){
         count++;
      }
};
int Counter::count=0;

int main()
{
    Counter c1,c2;
    c1.increase();
    c2.increase();

    Counter::showCount();
    return 0;
}