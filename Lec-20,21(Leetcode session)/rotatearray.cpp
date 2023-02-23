#include<iostream>
using namespace std;
int main()
{
    int m,arr1[100],temp[100],k;
cout<<"Enter the no of elements you want to emter in arr1[]:";
cin>>m;
for(int i=0;i<m;i++)
{
    cin>>arr1[i];
}
cout<<"Enter the no of positions by which u want to rotate array(k value):";
cin>>k;
for(int i=0;i<m;i++)
{
    temp[(i+k)%m]=arr1[i];
}
for(int i=0;i<m;i++)
{
    cout<<temp[i]<<" ";
}
}