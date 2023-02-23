#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int notes1,rem,notes2,rem1,notes3,rem2,notes4,rem3;
switch(n)
{
    case (1):
    {
        if(n>=100)
        {
            notes1=n/100;
            cout<<"no of 100 notes are:"<<notes1<<endl;
            rem=n%100;
        }
    }
    case (2):
    {
        if(rem>=50)
        {
            notes2=rem/50;
            cout<<"no of 50 notes are:"<<notes2<<endl;
            rem1=rem%50;
        }
    }
     case (3):
    {
        if(rem1>=10)
        {
            notes3=rem1/10;
            cout<<"no of 50 notes are:"<<notes2<<endl;
            rem2=rem1%10;
        }
    }
    case (4):
    {
        if(rem1>=1)
        {
            notes4=rem2/1;
            cout<<"no of 50 notes are:"<<notes2<<endl;
            rem3=rem2%10;
        }
    }
    default:
    cout<<"wrong input";

}
}