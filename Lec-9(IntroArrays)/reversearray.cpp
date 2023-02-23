#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
int start=0;
int end=n-1;
int temp;
while(start<=end)
{
    //can use predefined swap

swap(arr[start],arr[end]);
/*temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;*/
start++;
end--;
}
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
int arr1[]={67,35,23,24,563,45,44};
int arr2[]={78,35,23,24,45,34};
reverse(arr1,7);
reverse(arr2,6);
printarray(arr1,7);
printarray(arr2,6);
}