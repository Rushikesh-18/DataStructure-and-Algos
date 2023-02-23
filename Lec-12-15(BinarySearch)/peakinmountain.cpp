#include<iostream>
using namespace std;
int peaki(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while(start<end)
    {
    if(arr[mid] < arr[mid+1])
    {
        start=mid+1;
    }
    else
    {
        end=mid;
    }
    mid=start+((end-start)/2);
    }
    return arr[start];
}
int main()
{
int arr1[]={3,4,5,1};
int maxi=peaki(arr1,4);
cout<<maxi;
}