#include<iostream>
using namespace std;
int main()
{
int i=5;
int &j=i;  //creating ref var
cout<<"i:"<<i<<endl;
cout<<"++i:"<<++i<<endl;
cout<<"j:"<<j<<endl;
cout<<"++j:"<<++j<<endl;
cout<<"&i:"<<&i<<endl;
cout<<"&j:"<<&j<<endl;
}