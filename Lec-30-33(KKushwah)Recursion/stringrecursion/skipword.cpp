#include<iostream>
using namespace std;
string skipbad(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    if(s.substr(0,2)=="bad")
    {
        return skipbad(s.substr(2));
    }
    else{
        return s[0]+ skipbad(s.substr(1));
    }
}
int main()
{
string s="Rushikeshisbadboy";
skipbad(s);
}