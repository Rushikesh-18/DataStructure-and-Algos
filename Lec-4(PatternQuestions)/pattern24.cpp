/*
    1
   22
  333
 4444
55555
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
    int space=n-i;
    while(space>0){
    cout<<" ";
    space--;
}
    
    for(j=1;j<=i;j++)
    {
        cout<<i;
    }
    cout<<endl;
}
}