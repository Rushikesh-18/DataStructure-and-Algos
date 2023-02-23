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
int total=m*n;
int count=0;
int startCol=0;
int endRow=m-1;
int startRow=0;
while(count<total) 
{
    for(int i=endRow;i>=startRow;i--)
    {
        cout<<arr1[i][startCol];
        count++;
    }
    startCol++;
}
}