#include<iostream>
using namespace std;
int main()
{
int n1,n2;
cout<<"Enter the value of n1:";
cin>>n1;
cout<<"Enter the value of n2:";
cin>>n2;
switch(n1==n2)
{
    case 1:
    cout<<"Both are same";
    break;
    /*case 0:       //n1=5  n2=3
    n1=n1+n2;    //n1=5+3=8
    n2=n1-n2;    //n2=8-3=5
    n1=n1-n2;    //n1=8-5=3*/
   case 0:
    n1=n1*n2;
    n2=n1/n2;
    n1=n1/n2;
    cout<<"n1:"<<n1<<endl<<"n2:"<<n2;   //n1=3 n2=5
}
}