#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<2)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);     //recurrence relation  debug here
    //fibo(n-1) executes first as its written first until & unless fibo(n-1) not returns a value fibo(n-2)is not executed.

    
     
}
int main()
{
cout<<fibo(4);

}