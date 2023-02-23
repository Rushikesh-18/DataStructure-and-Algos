#include<iostream>
using namespace std;
void updatep(int **p2)
{
    //p2=p2+1;
    //Kahi Change Zala -NO
    *p2=*p2+1;
    //Kahi Change Zala-YES
    //
    **p2=**p2+1;
    //Kahi Change Zala-YES
    


}
int main()
{
int p=5;
int *p1=&p;
int **p2=&p1;
cout<<"Before p:"<<p<<endl;
cout<<"Before p1:"<<p1<<endl;
cout<<"Before p2:"<<p2<<endl;
updatep(p2);
cout<<"After p:"<<p<<endl;
cout<<"After p1:"<<p1<<endl;
cout<<"After p2:"<<p2<<endl;

}