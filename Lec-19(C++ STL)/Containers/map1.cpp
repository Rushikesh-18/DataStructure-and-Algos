#include<iostream>
#include<map>
using namespace std;
int main()
{
map<int,string> m;
m[1]="Rushikesh";
m[2]="Ramesh";
m.insert({3,"Pachpute"});

for(auto i:m)
{
    cout<<i.first<<"  "<<i.second<<endl;
}
cout<<endl;
cout<<m.erase(1);
for(auto i:m)
{
    cout<<i.first<<"  "<<i.second<<endl;
} 
cout<<endl;
cout<<"2is present->:"<<m.count(2);
}