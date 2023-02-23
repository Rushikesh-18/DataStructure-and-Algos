#include<iostream>
using namespace std;
int main()
{
    int a,b;
cout<<"Enter 1st number:";
cin>>a;
cout<<"Enter second no:";
cin>>b;
char ch;
cout<<"Enter operation to perform:";
cin>>ch;
switch(ch)
{
case '+':
{
    cout<<"Addition of a and b is:"<<a + b;
    break;
}
case '-':
{
    cout<<"Subtraction of a and b is:"<<a - b;
    break;
}
case '*':
{
    cout<<"Multiplication of a and b is:"<<a * b;
    break;
}
case '/':
{
    cout<<"Division of a and b is:"<<a / b;
    break;
}
case '%':
{
    cout<<"Modulo of a and b is:"<<a%b;
    break;
}
default:
cout<<"Enter Valid Option";

}

}