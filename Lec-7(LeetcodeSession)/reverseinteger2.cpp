//for greater nos.
//when we do ans*10 it goes outside the range of int datatype.
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int digit;
int ans=0;
int INT_MAX=2147483647;
int INT_MIN=-2147483648;
while(n!=0)
{
    digit=n%10;
    ans=(ans*10)+digit;
    n=n/10;

}
    if((ans>INT_MAX/10) || (ans<INT_MIN/10))
    {
        cout<<"0";
    }
    else{
    cout<<ans;
    
    }
    
}
