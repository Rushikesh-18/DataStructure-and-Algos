#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
int sum=0;
int product=1;

while (n!=0)
{
    int rem=n%10;
    sum=sum+rem;
    product=product*rem;
    n=n/10;

}
int ans=product-sum;
cout<<ans;
}