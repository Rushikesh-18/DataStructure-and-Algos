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
int startCol=0;
int startRow=0;
int endRow=m-1;
int endCol=n-1;
int total=m*n;
int count=0;

while(/*startCol<=endCol &&startRow<=endRow */count<total)
{
    //print start row
    for(int i=startCol;count<total&&i<=endCol;i++)  //checking everytime count as if not checked once entered in for loop it'll ocntinue till its end and count can also get exceeded.
    {
        cout<<arr1[startRow][i]<<" ";   //[startRow]ani mg [i]karan i=startCol
        count++;
    }
    startRow++;
    //print end coloumn
    for(int i=startRow;count<total&&i<=endRow;i++)
    {
        cout<<arr1[i][endCol]<<" ";
        count++;
    }
    endCol--;
    //print end row



    
    
    for(int i=endCol;count<total&&i>=startCol;i--)
    {
        cout<<arr1[endRow][i]<<" ";
        count++;
    }
    endRow--;
    //print start Coloumn
    for(int i=endRow;count<total&&i>=startRow;i--)
    {
        cout<<arr1[i][startCol]<<" ";
        count++;
    }
    startCol++;
    }
}