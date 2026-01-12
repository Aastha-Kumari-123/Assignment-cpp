//program using loop to print series..
//series:4,7,10,13,16,.....
#include<iostream>
using namespace std;
int main(){
    int start=4;
    int  num_of_Terms;
    cout<<"Enter total no of terms:";
    cin>>num_of_Terms;
    for(int i=1;i<=num_of_Terms;i++)
    {
        cout<<start<<" ";
        start+=3;
    }
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                   