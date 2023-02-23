/*
123
456
789
*/
#include<iostream>
using namespace std;
int main()
{
int i;
int n;
int count=1;
cin>>n;
for(i=1;i<=n;i++)
{
    int j;
    for(j=1;j<=n;j++)
    {
     
        cout<<count<<" ";
          count=count+1;
    }
  
    cout<<endl;
}
}