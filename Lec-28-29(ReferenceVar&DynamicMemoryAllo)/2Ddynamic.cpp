#include<iostream>
using namespace std;
int main()
{
int row,col;
cin>>row>>col;
int **arr=new int*[row];   //array with pointer have been created we have to create array corresponding to every index//ubha wala array kadhla tyat fkt pointers astat anii prtyekachya corresponding array bnto

for(int i=0;i<row;i++)
{
arr[i]=new int[col];
}

for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>arr[i][j];
    }
}

for(int i=0;i<row;i++)
{
    
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        delete arr[i];
    }
}
delete arr;
}