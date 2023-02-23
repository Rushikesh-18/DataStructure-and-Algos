#include<iostream>
using namespace std;
int main()
{
char ch='a';
cout<<sizeof(ch)<<endl<<endl;

char *c=&ch;
cout<<sizeof(c)<<endl<<endl;

char *ch1=new char;
cout<<sizeof(ch1)<<endl<<endl;//It occupies 5 byte 4 by *ch1 and 1 by new char.
delete ch1;

}