/*
    1 
   2 3 
  4 5 6 
 7 8 9 10 
11 12 13 14 15 
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j; 
int count=1;
for(i=1;i<=n;i++)
{
    int space=n-i;
    while(space>0){
    cout<<" ";
    space--;
}
    
    for(j=1;j<=i;j++)
    {
        cout<<count<<" ";   //printed space so pyramid formed
        count++;
    }
    cout<<endl;
}
}