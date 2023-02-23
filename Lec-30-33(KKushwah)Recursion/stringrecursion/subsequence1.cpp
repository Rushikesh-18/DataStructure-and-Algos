#include<iostream>
using namespace std;
void subseq(string s1,string s)
{
    if(s.empty())
    {
        cout<<s1<<endl;
        return;
    }
    char ch=s.at(0);
    subseq(s1+ch,s.substr(1));
    subseq(s1,s.substr(1));
}
int main()
{
string s="abc";
string s1="";
subseq(s1,s);
}