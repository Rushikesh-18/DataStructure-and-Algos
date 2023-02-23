#include<iostream>
using namespace std;
int n,r;

int factorial(int j)
{
    int fact=1;
for(int i=1;i<=j;i++)
{
    fact=fact*i;
}
return fact;
}
int nCr()   
{
cin>>n>>r;              //nCr=n!/r!*(n-r)!
int num=factorial(n);
cout<<num<<endl;   //dryrun
int deno=factorial(r)*factorial(n-r);
cout<<factorial(r)<<endl;  // dryrun
cout<<factorial(n-r)<<endl;  //dryrun

 
int ans=num/deno;
return ans;
}
int main()
{
int answer=nCr();
cout<<"Answer is:"<<answer;
}