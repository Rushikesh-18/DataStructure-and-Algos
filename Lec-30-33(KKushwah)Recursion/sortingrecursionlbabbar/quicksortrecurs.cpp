#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
int p=arr[s];
int count=0;
for(int i=s+1;i<=e;i++)
{
    if(arr[i]<=p)
    {
        count++;
    }
}
int pivotIndex=s+count;
swap(arr[pivotIndex],arr[s]);
//now we have to satisy 4th step of partition algorithm
int i=s;
int j=e;
while(i<pivotIndex && j>pivotIndex)
{
   
    while(arr[i]<=p)
    {
        i++;
    }
    while(arr[j]>p)
    {
        j--;
    }
     if(i<pivotIndex && j>pivotIndex)
    {
        swap(arr[i++],arr[j--]);
    }
}
return pivotIndex;
}
void quickSort(int arr[],int s,int e)
{
//base condition
if(s>=e)
{
    return;
}
 
int po= partition(arr,s,e);
//sort left side
quickSort(arr,s,po-1);
//sort right side
quickSort(arr,po+1,e);
}
int main()
{
int arr[]={4,2,5,1,3};
int n=5;
quickSort(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
