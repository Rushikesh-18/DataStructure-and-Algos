#include<iostream>
using namespace std;
int main()
{
int arr1[100],n,key;
cout<<"How many elements u want to enter in array:";
cin>>n;
cout<<"Enter the elements of array:";
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}
cout<<"Enter the element u want to search in array:";
cin>>key;
int start=0;
int end=n-1;
int mid=(start+end)/2;
//mid=((start)+(end-start)/2)=start+(end/2)-(start/2)=(start+end)/2
while(start<=end)
{
    if(arr1[mid]==key)
    {
        cout<<mid;
        break;
    }
    else if(key<arr1[mid])
    {
        end=mid-1;
    }
    else if(key>arr1[mid])
    {
        start=mid+1;
    }
    else{
        cout<<"Not Found";
    }
    mid=(start+end)/2;
}
}
