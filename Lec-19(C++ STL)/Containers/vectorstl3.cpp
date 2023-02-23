#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v3;
v3.assign(3,5);

cout<<"Element at front is:"<<v3.front()<<endl;

cout<<"Element at back is:"<<v3.back()<<endl;

cout<<"Elemnt at 1 index is:"<<v3.at(1)<<endl;

cout<<"Element at 2index is:"<<v3[2]<<endl;


}