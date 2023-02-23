#include<iostream>
using namespace std;
void update1(int n)       //pass by value as value i=n is received as argument
{
    n++;   //n new variable created same as copy of i;
}
int main()
{
int i=5;
cout<<"Before i:"<<i<<endl;
update1(i);           //update1 function called
cout<<"After i:"<<i<<endl;

}