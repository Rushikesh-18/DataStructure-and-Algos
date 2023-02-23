/*
D
CD
BCD
ABCD
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j;
char start;
for(i=1;i<=n;i++)
{
    start='A'+n-i;  //starting character is found like here d in first row,c in second row and b ,A in third and fourth row resp.
    for(j=1;j<=i;j++)
    {
     cout<<start;
      start++;        //Incremented that starting character
    }
    cout<<endl;
}
}