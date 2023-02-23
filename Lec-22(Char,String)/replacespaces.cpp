#include<iostream>
using namespace std;
string replaceString(string s)
{
string temp=" ";
string r;
for(int i=0;i<s.length();i++)
{
    if(s[i]==' ')
    {
s[i]='@';
    }
}
return s;
}
int main()
{
cout<<"Enter the string";
string s;
int leno=s.length();
getline(cin,s);

cout<<"New string:"<<replaceString(s);
}