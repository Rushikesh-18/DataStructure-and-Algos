#include<iostream>
#include<list>
using namespace std;
int main()
{
list<int> l;
l.push_back(10);
l.push_front(20);
for(int i:l)
{
cout<<i<<" ";
}
cout<<endl;
l.pop_back();
for(int i:l)
{
cout<<i<<" ";
}
cout<<endl;
l.push_back(20);
//cout<<"element at 1 index is:"<<l.at(1)<<endl;

cout<<"IsEmpty l:"<<l.empty()<<endl;
cout<<"Size:"<<l.size()<<endl;
cout<<"Max_Size"<<l.max_size()<<endl;
l.erase(l.begin(),l.begin());
for(int i:l)
{
cout<<i<<" ";
}
cout<<endl;
list<int> n(l); //copy one lsit into another
for(int i:n)
{
cout<<i<<" ";
}

}