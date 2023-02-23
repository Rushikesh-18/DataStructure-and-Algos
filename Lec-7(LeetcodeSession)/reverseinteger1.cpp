#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int ans=0;
int digit;
while(n!=0)
{
    digit=n%10;   //taking out digits of zeros place from no.
ans=(ans*10)+digit;
n=n/10;           //removing zeroes digit

}
cout<<ans<<endl;
}