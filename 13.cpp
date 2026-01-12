//program to demonstrate logical operator(&&,||,!)...
#include<iostream>
using namespace std;
int main()
{
    int age=28;
    int income=45000;
    //logical AND
    if(age>=25&&income>=35000)
       cout<<"eligible for paying loan\n";
    else
        cout<<"not eligible for paying loan\n";
     
    //logical OR    
    string str="coffee";
    if(str=="tea"||str=="coffee")
       cout<<"caffeine lover\n";
    else
        cout<<"not a caffeine lover\n";

    //logical NOT
    bool isdoingJob=true;
    if(isdoingJob){
         cout<<"self independent person"<<endl;
    }    
    else
         cout<<"not a self independent person"<<endl;

   return 0;    

}