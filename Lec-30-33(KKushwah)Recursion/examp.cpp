#include<iostream>
using namespace std;
class examp
{
void number(int n)
{
n=1;
cout<<n;
number2(n); 
}                    
void number5(int n)
{
n=5;
cout<<n;                                      
}
void number4(int n)
{
n=4;
cout<<n;
number5(n);   
}
void number3(int n)
{
n=3;
cout<<n;
number4(n);   
}
void number2(int n)
{
n=2;
cout<<n;
number3(n); 
}

void main()
{
int n;
number(n);
 
}
};