#include<iostream>
using namespace std;
bool checkPalindrome(string s,int i,int j)
{
    //bae codndn
    if(i>j)
    {
        return true;
    }
    if(s[i]==s[j])
    {
        i++;
        j--;
    }
    else{
        return false;
    }
 checkPalindrome(s,i,j);
    

}
int main()
{
string s="aabaas";
cout<<checkPalindrome(s,0,s.length()-1);
}