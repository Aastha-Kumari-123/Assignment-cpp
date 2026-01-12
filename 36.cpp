//Program for matrix multiplication...
#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    cout<<"enter values for 1st matrix:"<<" ";
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
      {
        cin>>a[i][j];
      }
      cout<<"enter values for 2nd matrix:"<<" ";
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
      {
        cin>>b[i][j];
      }
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
            {
             c[i][j]+=a[i][k]*b[k][j] ;
            }
        }
        cout<< "\n multiplication of both matrix is: ";
        for(int i=0;i<3;i++)
          for(int j=0;j<3;j++){
             cout<<c[i][j]<<"  ";
          }
          return 0;
}