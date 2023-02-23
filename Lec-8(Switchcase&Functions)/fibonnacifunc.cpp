#include<iostream>
using namespace std;
int ans;
int n,nextno=1;
void fibo()
    {
        int a=0,b=1;
        cin>>n;
        cout<<a<<" "<<b;
        for(int i=1;i<=n-2;i++)
        {
            a=b;
            b=nextno;
            nextno=a+b;
            cout<<" "<<nextno<<" ";
        } 
    }

int main()
{
    fibo();
}