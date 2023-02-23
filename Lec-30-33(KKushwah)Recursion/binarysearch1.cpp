#include<iostream>
using namespace std;
int bisearch(int arr[],int target,int s,int e)
{
        if(s>e)
        {
            return -1;
        }
        int mid=s+(e-s)/2;
        if(arr[mid]==target)
        {
            return mid;
           
        }
        else if(arr[mid]>target)
        {
            return bisearch(arr,target,s,mid-1);
        }
        else{
              return bisearch(arr,target,mid+1,e);
        }
    
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,10};
int s=0;
int e=9;
int target=9;
cout<<"Enter target from 0 to 10:";
//cin>>target;
cout<<bisearch(arr,target,s,e);
}