#include<iostream>
using namespace std;
  int count1=0;
  int count2=0;
int setbits()
{
    int a,b;
    cin>>a>>b;
    while(a!=0 & b!=0)
    {
        if(a&1==1)
        {
            count1++;
            a=a>>1;
        }
        else{
            a=a>>1;
        }
        if(b&1==1)
        {
            count2++;
            b=b>>1;
        }
        else{
            b=b>>1;
        }
    }
    return count1;
    return count2;
}

int main()
{
setbits();
cout<<"1's in a are:"<<count1<<endl<<"1's in b are:"<<count2;
}