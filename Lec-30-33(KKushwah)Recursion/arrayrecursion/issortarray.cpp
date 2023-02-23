 #include<iostream>
using namespace std;
bool isSorted(int *arr,int index,int n)
{
if(index==n-1)
{
return true;
}

    return arr[index]<arr[index+1]  && isSorted(arr,index+1,n);
}


int main()
{
int arr[]={1,2,8,4,5};
int n=5;
int index=0;
cout<<isSorted(arr,index,n);

}