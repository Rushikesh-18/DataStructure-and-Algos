#include<iostream>
using namespace std;
void update1(int n)       //pass by value as value i=n is received as argument
{
    n++;   //n new variable created same as copy of i;
}
void update2(int &n)       //pass by reference as reference  &n=i is received as argument
{
    n++;
}
int& update3(int n)   //as input can we make output as reference variable   //bad practice
{
    n++;                //scope remain only till end of this func so what it ll return nothing but return type is used as referecne 
    return n;           //local var
}
int main()
{
int i=5;
cout<<"Before i:"<<i<<endl;
update1(i);           //update1 function called
cout<<"After i:"<<i<<endl;
//We can see that no change,working shown in notebook
cout<<endl;
cout<<endl;




cout<<"Before i:"<<i<<endl;
update2(i);           //update1 function called
cout<<"After i:"<<i<<endl;
//We can see that  change is there 5 becomes 6,working shown in notebook


cout<<endl;
cout<<endl;
cout<<"Before i:"<<i<<endl;
update3(i);           //update1 function called
cout<<"After i:"<<i<<endl;
//We can see that  change is there 5 becomes 6,working shown in notebook
}