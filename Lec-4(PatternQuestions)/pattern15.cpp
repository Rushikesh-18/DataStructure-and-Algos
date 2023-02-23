/*
ABCDE
FGHIJ
KLMNO
PQRST
UVWXY
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j;
char start='A';
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        
        cout<<start;
        start++;
    }
    
    cout<<endl;
}
 
}
