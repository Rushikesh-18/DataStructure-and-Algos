/*
B	A	Q
0	0	0
0	1	1
1	0	1
1	1	0
*/
#include<iostream>
using namespace std;
int ans=0;
int unique(int arr[],int size)
{
for(int i=0;i<size;i++)
{
    
    ans=ans^arr[i];
}
return ans;
}
int main()
{
int arr1[]={1,2,1,5,3,2,3};
unique(arr1,8);
cout<<ans;
}