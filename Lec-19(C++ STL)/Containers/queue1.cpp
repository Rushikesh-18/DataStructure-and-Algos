#include<iostream>
#include<queue>
using namespace std;
int main()
{
queue<string> q;
q.push("Rushikesh");
q.push("Ramesh");
q.push("Pachpute");
cout<<"Front Element is:"<<q.front()<<endl;
cout<<"Size of Queue is:"<<q.size()<<endl;
q.pop();
cout<<"Front Element is:"<<q.front()<<endl;
cout<<"Size of Queue is:"<<q.size()<<endl;
}