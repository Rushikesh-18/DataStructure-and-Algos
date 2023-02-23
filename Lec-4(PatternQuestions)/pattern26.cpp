/*
    1
   121
  12321
 1234321
123454321
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j; 
int start;
for(i=1;i<=n;i++)
{
    int space=n-i;
    while(space>0){
    cout<<" ";
    space--;
}
    
    int j=1;
    while(j<=i)
    {
        cout<<j;
        j++;
    }
    
    start=i-1;
    while (start)
    {
        cout<<start;
        start--;
        
    }
    cout<<endl;
    
        
}

}
