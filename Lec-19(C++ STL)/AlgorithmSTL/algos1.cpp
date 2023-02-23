#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(6);
v.push_back(5);
v.push_back(7);
v.push_back(8);
v.push_back(9);
cout<<"For finding 6:"<<binary_search(v.begin(),v.end(),6)<<endl;

int a=5,b=10;
cout<<"Maximum from a and b is:"<<max(a,b)<<endl;
cout<<"Minimum from a and b is:"<<min(a,b)<<endl;
swap(a,b);
cout<<"Swap of a:"<<a<<" "<<"Swap of b is:"<<b<<endl;

//Reverse the string
string s="Rushikesh";
reverse(s.begin(),s.end());
cout<<s<<endl;

sort(v.begin(),v.end());  //BAased  on introsort=comb of insertion ,heap,quick sort Read documentations
for(auto i:v)
{
    cout<<i<<" ";
}
cout<<endl;

cout<<endl;
rotate(v.begin(),v.begin()+2,v.end());   //rotate(start(),middle.()..kuth_prynt,end());
for(auto i:v)
{
    cout<<i<<" ";
}
}n