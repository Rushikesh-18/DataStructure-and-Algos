/*
1
21
321
4321
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j;

for(i=1;i<=n;i++)
{
  // int value=i;
    for(j=1;j<=i;j++)
    {
       // cout<<value;
        //value--;
        cout<<i-j+1;
    }
    cout<<endl;
}

}