#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
        return 1;   //true
        }
    }
    return 0;
}
int main()
{
int arr1[]={28,29,-101,757,423,598,653,512,23,1,-23};
cout<<"Enter the element to search for:";
int key;
cin>>key;
int found=search(arr1,11,key);
if(found)
{
    cout<<"Key is found";
}
else{
    cout<<"Key is not found";
}
}
