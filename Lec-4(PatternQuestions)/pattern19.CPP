/*
A
BC
CDE
DEFG
EFGHI
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j;
char ch;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        ch='A'+i+j-2;    //also can use starting method
        cout<<ch;
    }
    cout<<endl;
}
}