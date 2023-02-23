#include<iostream>
using namespace std;
int main()
{
int arr1[100],n;
int duplicate[100];
cout<<"Enter the no of elements u want to enter into an array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
duplicate[i]=1;
}
for(int i=0;i<=n;i++)
{
    if(duplicate[i]==0)
    {
        continue;
    }
    for(int j=i+1;j<=n;j++)
    {
        if(arr1[i]==arr1[j])
        {
            duplicate[i]=duplicate[j]=0;
        }

    }
    if(duplicate[i]==0)
    {
        cout<<arr1[i]<<" ";
    }
}
}