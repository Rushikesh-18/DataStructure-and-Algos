#include<iostream>
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


void getReverse(char name[],int n)
{
int s=0;
int e=n-1;
while(s<e)
swap(name[s++],name[e--]);
}


bool checkPalindrome(char ch[],int n)
{
int s=0;
int e=n-1;
while(s<e)
{
if(ch[s]!=ch[e])
{
	return 0;
}
else
{
	s++;
	e--;
}
}
return 1;
}


int main()
{
    char name[20];
    cout << "Enter the string:";
    cin >> name;
    int le = getLength(name);
    cout << "Length of String is:" << le<<endl;
    getReverse(name,le);
    cout<<"Reverse of String is:"<<name<<endl;
    cout<<"IsPalindrome:"<<checkPalindrome(name,le);
}