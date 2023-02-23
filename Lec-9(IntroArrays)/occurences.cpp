#include<iostream>
using namespace std;
int main()
{
int arr1[100],unique[100],n,hold;
cout<<"How many elements u want to add in array:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr1[i];
unique[i]=0;
}
for(int i=0;i<n;i++)
{
    int count=0;
    int hold=0;
    for(int j=0;j<n;j++)
    {
        if(arr1[i]==arr1[j])
        {
            count++;
         //   hold=hold+count;
        }
        else
        {
            hold=1;
        }
       
    }
    cout<<"The occurence of"<<arr1[i]<<"-->"<<count;
    cout<<endl;
     //count=0; 
}
}