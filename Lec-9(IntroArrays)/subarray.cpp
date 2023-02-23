#include<iostream>
using namespace std;
int subarr(int arr[],int size)
{
    int maxsum=0;
for(int i=0;i<size;i++)
{
    int currsum=0;
    for(int j=i;j<size;j++)
    {
        currsum =currsum+arr[j];
         if(currsum>=maxsum)
         maxsum=currsum;
    }
}
       // maxsum=max(maxsum,currsum);   //1 2 7 -4 3 2 -10 9 1

return maxsum;
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
cout<<subarr(arr1,n);
}