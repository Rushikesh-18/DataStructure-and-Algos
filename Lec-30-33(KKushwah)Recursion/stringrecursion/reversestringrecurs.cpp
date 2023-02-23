#include<iostream>
using namespace std;
void reverse(string &s,int i,int j)
{
    cout<<"Call received for"<<s<<endl;
    //base condn
    if(i>=j)
    {
        return;
    }
    swap(s[i++],s[j--]);
    reverse(s,i,j);
}
int main()
{
    string s="Rushikesh";
    reverse(s,0,s.length()-1);
    cout<<s;
}