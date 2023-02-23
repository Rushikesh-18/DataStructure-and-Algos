#include<iostream>
using namespace std;
char maxOccurchar(string s)
{
    int arr1[26]={0};
   for(int i=0;i<s.length();i++)
   {
    char ch=s[i];
   int number=0; 
   if(ch>='a'&& ch<='z')
   {
      number=ch-'a';
   }
   if(ch>='A'&& ch<='Z')
   {
      number=ch-'A';
   }
   arr1[number]=arr1[number]+1;
   }
   int maximum=0;
   int answer=0;
   for(int i=0;i<26;i++)
   {
      if(maximum<arr1[i])
      {
         maximum=arr1[i];
         answer=i;
      }
   }
   return 'a'+answer;
}
int main()
{
   string s;
cout<<"Enter the string:";
cin>>s;
cout<<maxOccurchar(s);

}