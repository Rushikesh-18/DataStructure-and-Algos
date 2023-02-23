#include<iostream>
using namespace std;
int main()
{
int a=5;
int *ptr=&a;
int **ptr2=&ptr;   //pointer to pointer is created it stores the address of ptr when want to access it goes to ptr and ptr contains address of a form there value of a is fetched
cout<<"a:"<<a<<endl;
cout<<&a<<endl;

cout<<"*ptr:"<<*ptr<<endl;
cout<<"ptr:"<<ptr<<endl;
cout<<"&ptr:"<<&ptr<<endl;
cout<<"**ptr2:"<<**ptr2<<endl;  
cout<<"ptr2:"<<ptr2<<endl;
cout<<"&ptr2:"<<&ptr2<<endl;
}