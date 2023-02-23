#include<iostream>
#include<vector>
using namespace std;
int findIndexif(int *arr,int target,int n,int index)
{
if(index==n)
{
    return -1;
}
if(arr[index]==target)
{
    return index;
}
else{
    findIndexif(arr,target,n,index+1);
}
}

void findAllIndexif(int *arr,int target,int n,int index,int* v,int i)
{
if(index==n)
{
    return;
}
if(arr[index]==target)
{ 
    
v[i]=index;
findAllIndexif(arr,target,n,index+1,v,i+1);
}
else{
    findAllIndexif(arr,target,n,index+1,v,i+1);
}
}
int main()
{
int arr[]={1,2,3,4,5};
int arr1[]={1,2,4,4,5};
int target=4;
int index=0;
cout<<findIndexif(arr,target,5,index)<<endl;
int v[5]={0};
int i=0;
findAllIndexif(arr1,target,5,index,v,i);
for(int i=0;i<4;i++)
{
    cout<<v[i]<<" ";
}
}