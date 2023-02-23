#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the size of Matrix:";
cin>>m>>n;
int arr1[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)

    
    {
        cin>>arr1[i][j];
    }
}
for(int j=0;j<n;j++)
{
    if(j%2==1)
    {
        for(int i=m-1;i>=0;i--)
        {
            cout<<arr1[i][j];
        }
    }
    else{
        for(int i=0;i<m;i++)
        {
            cout<<arr1[i][j];
    }
}
}
}