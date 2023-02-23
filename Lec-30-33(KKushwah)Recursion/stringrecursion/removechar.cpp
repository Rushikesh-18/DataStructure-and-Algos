#include<iostream>
#include<string>
using namespace std;
void removea(string s1,string s)
{
    if(s.empty())
    {
        cout<<s1;
    }
    char ch=s.at(0);
    
    if(ch=='a')
    {
        removea(s1,s.substr(1));
    }
    else{
         removea(s1+ch,s.substr(1));
    }
}
string removeCharRecursive(string str)
{
    // Base Case
    if (str.length() == 0) {
        return "";
    }
 
    // Check the first character
    // of the given string
    if (str[0] == 'a') {       //str.front() can also be used
 
        // Pass the rest of the string
        // to recursion Function call
        return removeCharRecursive(str.substr(1));
    }
 
    // Add the first character of str
    // and string from recursion
    return str[0]
           + removeCharRecursive(str.substr(1));
}

int main()
{
string s="baccadh";
string s1="";
//removea(s1,s);
removeCharRecursive(s);
}

//brobr tr chaltoy debug kelyvr kay problem ay ky kalaana
//even gfg soln is not w