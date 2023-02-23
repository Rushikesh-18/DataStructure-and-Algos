#include<iostream>
using namespace std;
int sqroot(int key)
{
int start=0;
int end=key;
int mid=(start+end)/2;
while(start<end)
{
    int mulsq=mid*mid;
if(mulsq==key)
{
    return mid;
}
if(mulsq>key)
{
    end=mid-1;
}
else{
    start=mid+1;
}
mid=(start+end)/2;
}
return mid;
}
int main()
{
int key;
cout<<"Enter the no whose square root u have to find:";
cin>>key;
cout<<"Square root is:";
cout<<sqroot(key);
}