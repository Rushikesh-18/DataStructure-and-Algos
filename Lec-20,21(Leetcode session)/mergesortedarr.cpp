#include<iostream>
using namespace std;
int main()
{
int arr1[100],arr2[100],arr3[100],m,n,i=0,j=0,k=0;
cout<<"Enter the no of elements you want to emter in arr1[]:";
cin>>m;
for(int i=0;i<m;i++)
{
    cin>>arr1[i];
}
cout<<"Enter the no of elements you want to emter in arr2[]:";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr2[i];
}
while(i<m && j<n)
{
if(arr1[i]<arr2[j])
{
    arr3[k]=arr1[i];
    k++;
    i++;
}
else{
    arr3[k]=arr2[j];
    k++;
    j++;
}
}
while(i<m)
{
arr3[k]=arr1[i];
k++;
i++;
}
while(j<n)
{
    arr3[k]=arr2[j];
    k++;
    j++;
}
cout<<"Sorted Array->";
for(int k=0;k<m+n;k++)
{
    cout<<arr3[k];
}
}
