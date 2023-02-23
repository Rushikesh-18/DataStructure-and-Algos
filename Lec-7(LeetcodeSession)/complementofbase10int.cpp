#include<iostream>
using namespace std;
int main()
{
//for example 5=101binary no
//1s complemet of 5=010;
//thus it is 2
int n;
cin>>n;
int m=n;
int mask=0;
int count =0;
while(m!=0){
    m=m>>1;
    count++;
while(count!=0)
{
    mask=mask<<1|1;
    count--;
}
}
int ans=(~n)& mask;
cout<<ans;

}