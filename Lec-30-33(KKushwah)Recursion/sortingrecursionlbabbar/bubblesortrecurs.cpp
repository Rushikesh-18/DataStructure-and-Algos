#include<iostream>
using namespace std;
void bubble(int arr[],int s,int e)
{
    if(s==0)
    {
        return;
    }
    else if (e<s)
    {
        if(arr[e]>arr[e+1])
        {
            swap(arr[e],arr[e+1]);
        }
            bubble(arr,s,e+1);

    
    }
    else{
         bubble(arr,s-1,0);
    }
    
}
int main()
{
int arr[6]={8,7,2,3,9,5};
bubble(arr,6,0);
for(int i=0;i<6;i++)
{
    cout<<arr[i];
}
}