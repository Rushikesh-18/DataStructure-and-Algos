#include<iostream>
using namespace std;
//int sumarr(int arr[],int n)
int sumarr(int *arr,int n)   //Myth busted acutally when we initialize a function we crerate a pointer we want to pass array so here pointer of that array is passed
{                            //we were thinking array is created but not only pointer to array is created 
    int sum=0;
    for(int i=0;i<n;i++)
    {
         sum=sum+arr[i];
    }
    return sum;
}

int main()
{
int arr1[6]={1,2,3,4,5,6};

cout<<"Sum is:"<<sumarr(arr1,6)<<endl;                     //21  //Here array is passed from index 0 
//We can use pointer to specify only part of array
cout<<"Sum is from index 2:"<<sumarr(arr1+2,4);          //3+4+5+6=18  //Here array is passed from index 2
}