//Program demonstrating formatted output using setw,setprecision...
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
      float x=99.7654387;
      cout<<setw(10)<<setprecision(4)<<x;
      return 0;
}