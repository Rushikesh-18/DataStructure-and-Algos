#include<iostream>
using namespace std;
int main()
{
int n;
int **jagged=new int*[2];
jagged[0]=new int[0];
jagged[1]=new int[1];
int size[2]={3,4};
int k=0;
for(int i=0;i<2;i++)
{
    int *p=jagged[i];  //*p=value at pth pos.  p=pos.
    for(int j=0;j<size[k];j++)
    {
        cin>>*p;
        p++;
    }
k++;
}
k=0;
for(int i=0;i<2;i++)
{
int *p=jagged[i];
for(int j=0;j<size[k];j++)
{
    cout<<*p<<" ";
    p++;
}
cout<<endl;
k++;
//jagged[i]++;
}
delete jagged;
}