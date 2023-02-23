#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int> s;

s.insert(1);
s.insert(1);
s.insert(1);
s.insert(1);
s.insert(2);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(5);
s.insert(6);

for(auto i:s)
{
    cout<<i<<" ";   //inserted no of times but returns only unique element
}
cout<<endl;
s.erase(s.begin());
for(auto i:s)
{
    cout<<i<<" ";   
}
cout<<endl;
set<int>::iterator it=s.begin();  //deleting element at specififed position
it++;
it++;  //4 deleted
s.erase(it);
for(auto i:s)
{
    cout<<i<<" ";   
}
cout<<endl;

cout<<"5 present or not->"<<s.count(5);
}