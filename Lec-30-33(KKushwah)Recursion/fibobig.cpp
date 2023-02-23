#include<iostream>
#include<math.h>
using namespace std;
int fiboformula(int n)
{
    
    return ((pow((1+sqrt(5))/2,n))/sqrt(5));

}
int main()
{

/*for(int i=0;i<11;i++)
{
cout<<fiboformula(i)<<endl;
}*/
long long int ans=fiboformula(50);
cout<<ans;
}