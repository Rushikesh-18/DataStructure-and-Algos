#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v;
int n,temp;
v.push_back(6);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
int s=0;
int e=v.size()-1;
while(s<e)
{
   /* temp=v[s];
    v[s]=v[e];
    v[e]=temp;
    s++;
    e--;  */
    swap(v[s],v[e]);
    s++;
    e--;
}
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
}