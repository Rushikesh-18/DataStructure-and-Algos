#include<iostream>
using namespace std;
int firstoccur(int arr[],int size,int key)
{
int start=0;
int end=size-1;
int ans=-1;
int mid=(start+end)/2;
while(start<=end)
{
  if(arr[mid]==key)
  {
    ans=mid;
    end=mid-1;
  }
  if(arr[mid]<key)
  {
    start=mid+1;
  }
  if(arr[mid]>key)
  {
    end=mid-1;
  }
  mid=(start+end)/2;
}
return ans;
}
int lastoccur(int arr[],int size,int key)
{
int start=0;
int end=size-1;
int ans=-1;
int mid=(start+end)/2;
while(start<=end)
{
  if(arr[mid]==key)
  {
    ans=mid;
    start=mid+1;
  }
  if(arr[mid]<key)
  {
    start=mid+1;
  }
  if(arr[mid]>key)
  {
    end=mid-1;
  }
  mid=(start+end)/2;
}
return ans;
}
int main()
{
int arr1[7]={1,2,3,3,3,3,4};
int answer=firstoccur(arr1,7,3);
int answwer=lastoccur(arr1,7,3);
cout<<"First occurence of el2emnt is:"<<answer;
cout<<"Last occurence of elemnt is:"<<answwer;
}
