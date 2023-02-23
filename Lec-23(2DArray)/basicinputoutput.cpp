#include<iostream>
using namespace std;
void printarray(int arr1[][4],int target)
{
    
//take input of 2Darray

for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        cin>>arr1[i][j];
    }
}
//print output row wise
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        cout<<arr1[i][j];
        
    }
    cout<<endl;
}
cout<<endl;
//print output coloumn wise
for(int j=0;j<4;j++)
{
    for(int i=0;i<3;i++)
    {
        cout<<arr1[i][j];
    }
    cout<<endl;
}
/*
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        if(arr1[i][j]==target)
        cout<<target<<" isPresent";
        
        else
         cout<<target<<" isnotPresent";
    }
    cout<<endl;
}
*/

}
int main()
{
int target;
cout<<"Enter element to search for:";
cin>>target;
int arr1[3][4];
printarray(arr1,target);
}