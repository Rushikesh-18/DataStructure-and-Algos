#include<iostream>
using namespace std;
    int n;
bool isPrime()
{

    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        return 1;
        }
    }
    return 0;
}
int main()
{
if(isPrime())
{
    cout<<n<<" is not PrimeNumber";
}
else{
    cout<<n<<" isPrimeNumber";
}
}