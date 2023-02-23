#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number:";
int n;
cin>>n;
bool flag=0;
for(int i=2;i<n;i++)
{
if(n%i==0)
{
    flag=1;
    break;
}
}
if(flag==1)
{
    cout<<n<<" is primenumber";
}
else{
    cout<<n<<" is not prime number";
}
}