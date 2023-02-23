#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int start=n-i+1;
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=n-i+1;j++)
     {
        cout<<j;
     }
    //dabang problem remaining
     cout<<endl;
    }
}