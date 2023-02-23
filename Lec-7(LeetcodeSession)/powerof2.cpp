#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cin>>n;
int x;
int ans;
int flag=0;
for(x=0;x<=31;x++)
{
 ans=pow(2,x);         
if(ans==n)
{
cout<<"when x="<<x<<"=yes"<<endl;
break;
}
else{
    cout<<"when x="<<x<<"No"<<endl;
}
}
}

