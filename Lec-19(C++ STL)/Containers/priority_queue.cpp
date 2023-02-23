#include<iostream>
#include<queue>
using namespace std;
int main()
{
priority_queue<int> maxi;   //will create a priority queue that will return the max element
priority_queue<int,vector<int>,greater<int>> mini;  //will create a priority queue that wil return the min element

maxi.push(1);
maxi.push(2);
maxi.push(3);
maxi.push(4);
int n=maxi.size();
cout<<"MAX_HEAP: ";
for(int i=0;i<n;i++)
{
cout<<maxi.top()<<" ";
maxi.pop();
}
cout<<endl;

mini.push(1);
mini.push(2);
mini.push(3);
mini.push(4);
int r=mini.size();
cout<<"MIN_HEAP: ";
for(int i=0;i<r;i++)
{
cout<<mini.top()<<" ";
mini.pop();
}
cout<<endl;
cout<<"IsEmpty Maxi->"<<maxi.empty()<<endl;
cout<<"IsEmpty Mini->"<<mini.empty()<<endl;
}