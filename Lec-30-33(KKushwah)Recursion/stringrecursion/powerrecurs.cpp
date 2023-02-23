#include<iostream>
using namespace std;
int findpower(int a,int b)
{
if(b==0)
{
    return 1;
}
if(b==1)
{
    return a;
}
int ans=findpower(a,b/2);
if(b%2==0)
{
    return ans*ans;
}
else{
    return a*ans*ans;
}
}
int main()
{
int a,b;
cout<<"Enter number and its power:";
cin>>a>>b;
cout<<findpower(a,b);
}
//See recursion tree in notebook