#include<iostream>
using namespace std;
int main()
{
int arr1[100],n,temp,no;
cout<<"Enter no of elements u want to enter in array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
cout<<"Enter the pos from where u want to reverse:";
cin>>no;
int start=no+1;
int end=n-1;
while(start<=end)
{
    temp=arr1[start];
    arr1[start]=arr1[end];
    arr1[end]=temp;
    start++;
    end--;
}
for(int i=0;i<n;i++)
{
cout<<arr1[i];
}
}