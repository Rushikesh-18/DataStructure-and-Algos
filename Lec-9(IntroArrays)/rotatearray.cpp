#include<iostream>
using namespace std;
void rotarray(int arr[],int n,int k)
{
int temp[100];          //Another array to store rotated array
int i=0;
while(i<n)
{
temp[(i+k)%n]=arr[i];
i++;
}
for(int i=0;i<n;i++)
{
cout<<temp[i];
}
}
int main()
{
int arr1[100],n;
cout<<"How many elements u want to add in array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
cout<<"Enter no positions by whichu want to rotate array:"<<endl;
int k;
cin>>k;
rotarray(arr1,n,k);
}