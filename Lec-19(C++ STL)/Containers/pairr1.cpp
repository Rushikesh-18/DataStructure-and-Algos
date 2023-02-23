#include<bits/stdc++.h>
using namespace std;
int main()
{
pair<int,string> p1;   //This class couples together a pair of values, which may be of different types (T1 and T2). The individual values can be accessed through its public members first and second.
p1={1,"rushikesh"};
cout<<p1.first<<" "<<p1.second<<endl;
pair<int,string> &p=p1;    //when reference is made reference is created and if & is not present copy is made
p1.first=10;
cout<<p.first<<" "<<p.second<<endl;   
//Pair are used for maintaining relations of two dstructures.
//we'll make par of two arrays
pair<int,int>parray[3];
parray[0]={1,2};
parray[1]={2,3};
parray[2]={3,4};
for(int i=0;i<3;i++)
{
    cout<<parray[i].first<<" "<<parray[i].second<<endl;
}
swap(parray[0],parray[2]);
for(int i=0;i<3;i++)
{
    cout<<parray[i].first<<" "<<parray[i].second<<endl;
}
pair<int,string> p2;   
cin>>p2.first;
cin>>p2.second;
cout<<p2.first<<" "<<p2.second;
} 