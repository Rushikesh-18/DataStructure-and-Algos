#include<iostream>
using namespace std;
int main()
{
int a=5;
cout<<a<<endl;
if(true){
    cout<<a<<endl;
    int b=3;
    cout<<b<<endl;
}
//cout<<b<<endl; //this will not run as it is declare only in the scope of if.
}