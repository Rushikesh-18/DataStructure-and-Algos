/*
ABCD
BCDE
CDEF
DEFG
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j; 

for(i=1;i<=n;i++)
{
        char ch='A'+i-1;           //give mention first character of each row and thus contginue with ch++
    for(j=1;j<=n;j++)
    {
           // char ch='A'+i+j-2;  //can be done in two ways
            cout<<ch;
            ch++;
        
   
    }
     cout<<endl;
}
}
/*AS WE DID IN THE NUMBER PROBLEM:
i+j-1;
and printed it.
in this similar we have to do
i+j-1=1;(In 1st row and 1 coloumn)
So,adding A on both side:
'A'+i+j-1=1+'A';
Now to cancel 1 from RHS subtract 1 from both side
Thus,
'A'+i+j-1-1=1+'A'-1
Gives;
'A'+i+j-2='A'
*/