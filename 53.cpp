//Program with multiple constructor...
#include<iostream>
using namespace std;
class Bill{
  int notebook=0,pen=0,marker=0;
  int saree=0,shirt=0,jacket=0,shoes=0;
  public:
      //Constructor for stationary..
      Bill(int n,int p,int m){
        notebook=n;
        pen=p;
        marker=m;
        cout<<"price of stationary items="<<n+p+m<<endl;
      }
        //Constructor for clothes..
        Bill(int saree,int shirt,int jack,int s){
            this->saree=saree;
            this->shirt=shirt;
            jacket=jack;
            shoes=s;
            cout<<"Price of accessories="<<saree+shirt+jack+s;
        }
};
int main(){
    Bill b1(150,20,35);
    Bill b2(1900,800,2000,1000);
    return 0;
}