#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j; 

for(i=1;i<=n;i++)
{
        int space=i-1;
    while(space>0){
    cout<<" ";
    space--;
}
  for(j=1;j<=n-i+1;j++)
  {

    
        int counter=i;
        cout<<counter;
   
    counter++;

        
    
  }
    cout<<endl;
}
}