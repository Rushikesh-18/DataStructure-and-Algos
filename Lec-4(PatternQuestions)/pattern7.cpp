/*
* * * * * 
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j;
for(int i=1;i<=n;i++)
{
//for(int j=n;j>=i;j--)
for(j=1;j<=n-i+1;j++)
{
    cout<<"* ";
}
cout<<endl;
}
}