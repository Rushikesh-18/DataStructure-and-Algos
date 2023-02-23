#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
//Consider nooN as palindrome neglect cases....
char toLowerCase(char ch)
{
	if(ch>='a' && ch<='z')
	{
		return ch;
	}
	else
	{
		char temp=ch -'A'+'a';   //This converts upper case char to lower case
		        //B-A+a;
				//ASCII VALUE OF B=66,A=65,a=97
				//66-65+97
				//1+97
				//98
				//b //Converted to lower case
				return temp;
	}
}
bool checkPalindrome(char ch[],int n)
{
int s=0;
int e=n-1;
while(s<e)
{
if(toLowerCase(ch[s])!=toLowerCase(ch[e]))
{
	return 0;
}
else
{
	if(ch>=0)
	{
	s++;
	e--;
	}
	else if((ch[s]>='a'&& ch[s]<='z')||(ch[s]>='A'&& ch[s]<='Z'))  //Reads only alphanumeric trings
	{
		s++;
	}
	else if((ch[e]>='a'&& ch[e]<='z')||(ch[e]>='A'&& ch[e]<='Z'))
	{
		e--;
	}
}
}
return 1;
}
int main() {
	char ch[10],n;
	cout<<"Enter the string:";
	cin>>ch;
	int le = getLength(ch);
    cout << "Length of String is:" << le<<endl;
	cout<<"IsPalindrome:"<<checkPalindrome(ch,le);
}