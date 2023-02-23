#include<iostream>
#include<deque>
using namespace std;
int main()
{
deque<int> d;
d.push_back(10);
d.push_front(20);
for(int i:d)
{
cout<<i<<" ";
}
cout<<endl;
d.pop_back();
for(int i:d)
{
cout<<i<<" ";
}
cout<<endl;
d.push_back(20);
cout<<"element at 1 index is:"<<d.at(1)<<endl;

cout<<"IsEmpty d:"<<d.empty()<<endl;
cout<<"Size:"<<d.size()<<endl;
cout<<"Max_Size"<<d.max_size()<<endl;
d.erase(d.begin(),d.begin());
for(int i:d)
{
cout<<i<<" ";
}

}