//Write a C++ program to swap the values of two variables if values of both variables are not the same using a switch statement
#include<iostream>
using namespace std;
int main()
{
int n1,n2,temp;
cout<<"Enter the value of n1:";
cin>>n1;
cout<<"Enter the value of n2:";
cin>>n2;
switch(n1==n2)
{
    case 1:
       cout<<"Both are same";
      break;
    case 0:
        temp=n1;
        n1=n2;
        n2=temp;
        cout<<"n1:"<<n1<<endl;
        cout<<"n2:"<<n2<<endl;
        break;
}
}