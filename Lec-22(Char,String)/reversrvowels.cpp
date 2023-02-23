#include<iostream>
using namespace std;
 string reverseVowels(string s) {
        int st=0;
        int e=s.length()-1;
        while(st<e)
        {
            if(s[st] =='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'   && s[e] =='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
            {
                swap(s[st++],s[e--]);
            }
            else if(s[st] =='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
            {
                e--;
            }
           else 
           {
               st++;
           }

        }
        return s;
    }
int main()
{
cout<<reverseVowels("hello");
}