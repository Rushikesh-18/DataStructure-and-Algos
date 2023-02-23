#include<iostream>
using namespace std;
int main()
{
int arr1[100],n;
cout<<"Enter no of elements u want to enter in array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1;j++)
    //still there is fault in bubble sort after every iteration largest element goes at the end 
    //thus to minimize comparisons we can do
    //f0r(int j=0;j<n-i;j++)
    {
        if(arr1[j]>arr1[j+1])
        {
            swap(arr1[j],arr1[j+1]);
        }
    }
}
for(int i=0;i<n;i++)
{
cout<<arr1[i];
}
}