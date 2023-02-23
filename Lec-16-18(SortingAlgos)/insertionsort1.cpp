#include<iostream>
using namespace std;
int main()
{
int arr1[100],n;
cout<<"Enter no of elements u want to enter in array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
int temp;

for(int i=1;i<n;i++)
{
    int j=i-1;
    temp=arr1[i];
    for(;j>=0;j--)
    {
        if(temp<arr1[j])
        {
            arr1[j+1]=arr1[j];
        }
        else{
            break;
        }
    }
    arr1[j+1]=temp;
}
for(int i=0;i<n;i++)
{
cout<<arr1[i];
}
}