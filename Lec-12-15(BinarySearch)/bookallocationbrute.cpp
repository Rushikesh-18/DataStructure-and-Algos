//BruteForce
#include<iostream>
using namespace std;
bool isPossible(int pages[],int m,int n,int pagePos)
{
    int studCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
 
    if(pages[i]>pagePos)
    {
        return false;
    }
    if(pageSum+pages[i]<=pagePos)
    {
        pageSum+=pages[i];
    }
    else{
        studCount++;
        pageSum=pages[i];
        if(studCount>m)
        {
            return false;
        }
    }
    
    }
    return true;
   
}
int allocateBooks(int pages[],int n,int m)
{
    int pagePos=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+pages[i];
    }
    if(m>n)
    {
        return false;
    }
    for(pagePos=1;pagePos<=sum;pagePos++)
    {
        if(isPossible(pages,m,n,pagePos))
        {
            return pagePos;
        }
    }
    return false;
}
int main()
{
    int n,m;
cout<<"Enter the number of books you have:";
cin>>n;
int *pages=new int[n];
cout<<"Enter the no of pages each book have:";
for(int i=0;i<n;i++)                        //Bad   Practice
{
    cin>>pages[i];
}
cout<<"Enter the no of studdents u want to allocate all books:";
cin>>m;
int ans=allocateBooks(pages,n,m);
cout<<ans;
delete pages;

}