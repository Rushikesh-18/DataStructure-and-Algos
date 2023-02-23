/*
321
321
321
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i;
for(i=1;i<=n;i++)
{
    int j;
    for(j=1;j<=n;j++)
    {
        cout<<n-j+1;
    }
    cout<<endl;
}
}