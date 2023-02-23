#include<iostream>
using namespace std;
void triangle1(int rw,int col)
{
/*  ****
    ***
    **
    *     */
    if(rw==0)
    {
        return;                               
    }
    else if(col<rw)
    {
        cout<<"*";
        triangle1(rw,col+1);
    }
    else{
        cout<<"\n";
        triangle1(rw-1,0);
    }
}
void triangle2(int rw,int col)
{
    /*       *
             **
             ***
             ****  
    */
    if(rw==0)
    {
        
        return;
    }
    else if(col<rw)
    {
         triangle2(rw,col+1);
        cout<<"*";
       
    }
    else{
        triangle2(rw-1,0);
        cout<<"\n";
        
    }
}
int main()
{
triangle2(4,0);
}