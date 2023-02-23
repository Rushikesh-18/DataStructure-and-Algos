#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
string s="i like this song very much";
vector<string> temp;
string temp1;
for(auto i=0;i<s.length();i++)
{
    if (s[i]==' ')
    {
        temp.push_back(temp1);
        temp1="";
    }
    else{
        temp1+=s[i];
    }
}
temp.push_back(temp1);
for(auto i=temp.size()-1;i>0;i--)
{
    cout<<temp[i]<<" ";
    
}
cout<<temp[0];
}