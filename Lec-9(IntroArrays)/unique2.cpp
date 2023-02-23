#include<iostream>
using namespace std;
int main()
{
int arr1[100],unique[100],n;
cout<<"How many elements u want to add in array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
unique[i]=1;
}
for(int i=0;i<n;i++)
{
    if(unique[i]==0)
    {
        continue;
    }
    for(int j=i+1;j<n;j++)
    {
        if(arr1[i]==arr1[j])
        {
            unique[i]=unique[j]=0;
        }
    }
    if(unique[i]==1) //for finding unique
    //if(unique[i]==0)   //For finding duplicates
    {
        cout<<arr1[i];
    }
}
}