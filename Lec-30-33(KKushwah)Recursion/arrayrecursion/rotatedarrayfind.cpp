#include<iostream>
using namespace std;
int rotfindele(int *arr,int target,int n,int s,int e)
{
    if(s>e)
    { 
        return -1;
    }
    int m=s+(e-s)/2;
    if(arr[m]==target)
    {
        return m;
    }
    if(arr[m]>=arr[s])   //tells array till m is sorted
    {
        if(target>=arr[s] && target<=arr[m])  //if at left side element lies in betn s and m 
        {
            return rotfindele(arr,target,n,s,m-1);    //1   st time this will only run
        }
        else{    //like conds target>arr[s]&& target>arr[m]
            return rotfindele(arr,target,n,m+1,e);    
        }
    }
    else
    {
    if(target>=arr[m]&& target<=arr[e])
    {
        return rotfindele(arr,target,n,s,m-1);
    }
    else
    {
         return rotfindele(arr,target,n,m+1,e);
    }
    }
    
}
int main()
{
int arr[]={111,222,444,555,999,888,777,666};
int n=8;
int target=666;
int s=0;
int e=7;
cout<<rotfindele(arr,target,n,s,e);
}