#include<iostream>
using namespace std;
bool isEven()
{
   int a;
    cin>>a;
    if(a&1)               //a=3     0000000000000000--x----0011
    {                                                    //  &1
      return 1;//(true)                                        //________
    }                                                  //     1(odd)
    else{
    return 0;//(false)
    } 
}
int main()
{
     
//isEven(n);
if(isEven())//jar true hot asel
{
    cout<<"Number is Odd";
}
else{
cout<<"Number is Even";
}
return 0;
}