/*12345
678910
1112131415
1617181920
2122232425*/
#include<iostream>
using namespace std;
int main()
{
int i;
int n;
cin>>n;
int j;int count=1;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
    cout<<count;
    count++;
}

cout<<endl;
}
}