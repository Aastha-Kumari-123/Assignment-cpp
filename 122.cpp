//Program reading full sentence using getline...
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a sentence:"<<endl;
    getline(cin,s);
    cout<<"Sentence you entered is :"<<s;
    return 0;
}