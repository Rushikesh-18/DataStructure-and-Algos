#include<iostream>
using namespace std;

int addition(int *arr,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans +=arr[i];
    }

return ans;
}
int main()
{
int n;
cout<<"Enter the size of array:";
cin>>n;
int *arr1=new int[n];
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}
addition(arr1,n);
int answer=addition(arr1,n);
cout<<answer;
delete arr1;
}