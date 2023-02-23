#include<bits/stdc++.h>
using namespace std;
int main()
{
//auto-auto is keyword in c++ 11 and higher which dynamically detects the dataype of varriables.
//They are very useful in detecting.
//auto is very useful in big iterators..

auto i=10;
  int n;
    cin>>n;
int arr[n];
for(auto &i:arr)
{
    cin>>i;
}
for(auto i:arr)        //auto caan also use dwith range base dfor loops
{
    cout<<i<<" ";
}
vector<int> v={1,2,3,4,5};
///vector<int>::iterator it;
for(auto it=v.begin();it!=v.end();it++)
{
cout<<(*it)<<" ";
}
cout<<endl;
vector<pair<int,int>> vp={{1,2},{2,3},{3,4}};
///vector<pair<int,int>>::iterator it1;
for( auto it1=vp.begin();it1!=vp.end();it1++) //Not req. to specify the dataype to it1 no need to write whole syntax if iterator
{                                             //Will automatically detect and map
cout<<(*it1).first<<" "<<(*it1).second<<endl;
} 
}