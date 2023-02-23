#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int notes100,notes50,notes10,notes1=0;
int rem1,rem2,rem3,rem4;
switch(n>=100)
{
    case 1:
    notes100=n/100;
    cout<<"No of 100 notes are:"<<notes100<<endl;
    n=n-(notes100*100);
    break;
}
switch(n>=50)
{
    case 1:
    notes50=n/50;
    cout<<"No of 50 notes are:"<<notes50<<endl;
    n=n-(notes50*50);
    break;
}
switch(n>=10)
{
    case 1:
    notes10=n/10;
    cout<<"No of 10 notes are:"<<notes10<<endl;
    n=n-(notes10*10);
    break;
}
switch(n>=1)
{
    case 1:
    notes1=n/1;
    cout<<"No of 1 notes are:"<<notes1<<endl;
    n=n-(notes1*1);
    break;
}
}