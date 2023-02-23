#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,arr1[100];          //Kadanes algorithm
/*vector<int> v;
v.push_back(1);
v.push_back(0);
v.push_back(2);
v.push_back(3);
v.push_back(0);*/
cout<<"Enter the no of elements you want to emter in arr1[]:";
cin>>m;
for(int i=0;i<m;i++)
{
    cin>>arr1[i];
}
int j=0;
for(int i=0;i<m;i++)
{
 
    if(arr1[i]!=0)
    {
        swap(arr1[i],arr1[j]);
        j++;
    }
}
for(int i=0;i<m;i++)
{
    cout<<arr1[i];
}
}