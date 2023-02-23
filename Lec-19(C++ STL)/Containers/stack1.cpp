#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int> s;
stack<string> s1;

s1.push("Rushikesh");
s1.push("Ramesh");
s1.push("Pachpute");
cout<<"Top Element:"<<s1.top()<<endl;
s1.pop();
cout<<"Top Element:"<<s1.top()<<endl;
cout<<"IsEmpty:"<<s.empty()<<endl;
cout<<"IsEmpty:"<<s1.empty()<<endl;
cout<<"Size of stack s1 is:"<<s1.size();
}