#include<iostream>
using namespace std;
int main()
{
int num=5;
int *ptr=&num;


cout<<"Value of num is:"<<num<<endl;
cout<<"Address of ptr (only when we try to print ptr:):"<<ptr<<endl;
cout<<"Value of ptr is(when we try to print *ptr):"<<*ptr<<endl;

cout<<endl;
char ch='r';
char *chr=&ch;
cout<<"Value of ch is:"<<ch<<endl;
cout<<"Address of chr (only when we try to print chr:):"<<chr<<endl;
cout<<"Value of *chr is(when we try to print *chr):"<<*chr<<endl;

cout<<endl;
double r=11.00;
double *rptr=&r;
cout<<"Value of r is:"<<r<<endl;
cout<<"Address of rptr (only when we try to print rptr:):"<<rptr<<endl;
cout<<"Value of *rptr is(when we try to print *rptr):"<<*rptr<<endl;


cout<<endl;
cout<<"We'll see size of pointers:"<<endl;
cout<<"Size of double is:"<<sizeof(r)<<endl;
cout<<"Size of double pointer is"<<sizeof(rptr)<<endl;
cout<<"Size of int is:"<<sizeof(num)<<endl;
cout<<"Size of int pointer is"<<sizeof(ptr)<<endl;
cout<<"Size of char is:"<<sizeof(ch)<<endl;
cout<<"Size of char  pointer is"<<sizeof(chr)<<endl;           

//32 bit os machine gives size of ptr as 4bytes while 64 bit os machines gibe 8 byte pointer size
//mazi 64 ay pn 4 bytes ka dakhvtat ky mahit
cout<<endl;
int *ptr2=&num;
cout<<"We can initialize 2 different pointer for same memory address:"<<*ptr2;

//int *ptr3;  Never do this this is a bad practice always assign something to it as this means u r pointing to some garbage value
cout<<endl;


int num2=5;
int a=num;
a++;

cout<<"Value of num2 is:"<<num2<<endl;;
cout<<"Value of a after increment is:"<<a<<endl;   //this doesn't increment num2;
int *num2ptr=&num2;
(*num2ptr)++;

cout<<"Value of n0um2ptr after increment is:"<<*num2ptr<<endl;  //increment num2 aalso
*num2ptr=*num2ptr+1;
cout<<num2ptr<<endl;
num2ptr=num2ptr+1;
cout<<*num2ptr<<endl;
cout<<num2ptr<<endl;
cout<<"Value of num2 after making pointer:"<<num2<<endl;


}