#include<iostream>
using namespace std;
void sortty(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
    int minIndex=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minIndex])
        {
            minIndex=j;
        }
    }
    swap(arr[minIndex],arr[i]);
}
}
int main()
{
int arr1[100],n;
cout<<"Enter no of elements u want to enter in array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
sortty(arr1,n);
for(int i=0;i<n;i++)
{
cout<<arr1[i];
}
}