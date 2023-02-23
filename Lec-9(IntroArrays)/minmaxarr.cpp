#include<iostream>
#include<limits>
using namespace std;
int getMax(int arr[],int n)
{
    int maxi=INT32_MIN;  ///macro which gives integer range from -2^31 -2 ^ 31 (-2147483648 to 2147483647)
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);  //predefined function to find max it says: maximum from (maxi and arr[i])store in maxi
       /* if(arr[i]>max)
        {
            max=arr[i];
        }*/
    }
    return maxi;
}
int getMin(int arr[],int n)
{
    int min=INT32_MAX;  ///macro istead of writing that 32 bit number this inbuilt macro is defined
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)  //mini=min(mini,arr[i]);
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
   int size;
   cin>>size;
   int arr1[100];
   for(int i=0;i<size;i++)
   {
    cin>>arr1[i];
   }
   int maximum=getMax(arr1,size);
   int minimum=getMin(arr1,size);
   cout<<"Max element is:"<<maximum<<endl;
 cout<<"Min element is:"<<minimum;
return 0;
}