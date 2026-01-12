//Program using Switch statement...
#include<iostream>
using namespace std;
int main()
{
    int choice ;
    cout<<"enter your choice between 1to 7:  ";
    cin>>choice;
    switch(choice)
    {
        case 1:
           cout<<"Monday";
           break;
        case 2:
           cout<<"Tuesday";
           break; 
        case 3:
           cout<<"Wednesday";
           break;
        case 4:
           cout<<"Thursday";
           break;        
        case 5:
           cout<<"Friday";
           break;
        case 6:
           cout<<"Saturday";
           break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid Input\nPlease try again...";      
    }
    return 0;                                                                                                                                                                                                            
}