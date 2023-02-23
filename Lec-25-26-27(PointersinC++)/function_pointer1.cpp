#include<iostream>
using namespace std;
void updateaddr(int *p)
{
p=p+1;
cout<<p<<endl;
}
void updateval(int *p)
{
*p=*p+2;
}

int main()
{
int val=5;
int *ptr1=&val;

cout<<"Before"<<ptr1<<endl;
updateaddr(ptr1);
cout<<"After"<<ptr1<<endl;
//Return same address we thought pointer will increment to next but it didnt updated; bcoz p pointer created in update function remains independent
//It updates there only 


//now we'll look do pointer update values
cout<<"Before"<<*ptr1<<endl;
updateval(ptr1);
cout<<"After"<<*ptr1<<endl;
//value is updated behind the scenes written in notebook.



}