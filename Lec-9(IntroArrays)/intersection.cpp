/*
{1,2,3,4,5} intersection {1,2,3,6,7}
=1,2,3
*/
#include<iostream>
using namespace std;
int main()
{
    int arr1[10],arr2[10],arr3[10];
int n,a,b;
cout<<"How many elements you want to enter in arr1:";
cin>>a;
cout<<"Enter the elements of array1 in sorted order:";
for(int i=0;i<a;i++)
{
    cin>>arr1[i];
}
cout<<"How many elements you want to enter in arr2:";
cin>>b;
cout<<"Enter the elements of array2 in sorted order:";
for(int i=0;i<b;i++)
{
    cin>>arr2[i];
}
int i=0,j=0;
while(i<a && j<b)
{
    if(arr1[i]==arr2[j])
    {
        cout<<arr1[i]<<" ";
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j])
    {
        i++;
    }
    else{
        j++;
    }
}

}