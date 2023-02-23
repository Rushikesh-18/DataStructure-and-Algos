#include<iostream>
using namespace std;
 bool isPowerOfThree(int n) {
        if(n==1)
        {
            return true;
        }
        n=n/3;
        isPowerOfThree(n);
        return false;
    }
int main()
{
isPowerOfThree(27);
}