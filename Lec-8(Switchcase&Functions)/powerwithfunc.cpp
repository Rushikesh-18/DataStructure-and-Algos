//Function is a program having a well defined task.
//Only perform task assigned nothing else
#include<iostream>
using namespace std;

int power()     //returntype functionname(Input parameters)
{
    int a,b;
cin>>a>>b;
 int answer=1;
    for(int i=1;i<=b;i++)
    {
        answer=answer*a;
    }
    return answer;
    
}
int main()
{
int ans=power();
cout<<"answer is:"<<ans;
 ans=power();
cout<<"answer is:"<<ans;

 ans=power();
 
cout<<"answer is:"<<ans;

 ans=power();
cout<<"answer is:"<<ans;


return 0;
}

