#include<iostream>
using namespace std;
int main()
{
int arr1[100],n;
cout<<"How many elements you want to enter in arr1:";
cin>>n;
cout<<"Enter the elements of array1 in  order:";
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr1[i]<arr1[j])
        {
            break;
        }
        if(arr1[i]==arr1[j])
        {
           swap(arr1[i],arr1[j]);
        }
        if(arr1[i]>arr1[j])
        {
            swap(arr1[i],arr1[j]);
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<arr1[i];
}
}