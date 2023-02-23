/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
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
for(j=1;j<=n;j++)
{
    char ch='A'+i-1;
    cout<<ch;
}
cout<<endl;
}
}
/*
for(i=1;i<=n;i++)
{
     char start='A';
    for(j=1;j<=n;j++)
    {
        
        cout<<start;
      
    }
      start++;
    cout<<endl;
}
*/