#include<iostream>
using namespace std;
void printArray(int arr[],int size)     
{
    cout<<"Printing array"<<"   ";
for(int i=0;i<size;i++)
{   
    cout<<arr[i]<<" ";
 
}
   cout<<endl;
}
int main()
{
    int n=15;
int arr1[5]={1};
cout<<arr1[0]<<endl;     //0x61fefc-memory location given not value
cout<<arr1[1]<<endl;           //only put one value all other vacant values will be alloted by some garbage value
cout<<arr1[2]<<endl;     //garbage value
int arr2[10]={0};        //this will allot o value to all the arrays but if any other number than 0 as in as in arr1 it will assign that no to oth index
cout<<arr2[2]<<endl;           //assigned 0
cout<<arr1[15]<<endl;          //this will give error or any random incorrect value as our array size is 5 but we are trying to access element at 15th index
int arr3[10]={1,2,3,4,5,6,7,8,9,10};
/*(for(int i=0;i<n;i++)
{
    cout<<arr3[i]<<" ";  //1 2 3 4 5 6 7 8 9 10 0 0 0 0 0 wil lbe output because our array size is 10 and n runs 15 times and always get value 0
}*/// Either of writing this everytime write it in func
printArray(arr3,15);  ////void printArray(arrayname,int size)   
int arr3size=sizeof(arr3);
cout<<"length of arr3 is:"<<arr3size<<endl;  //it will return 40 because be have made array of 10 size and it is a integer array so each bloack will occup 4 bytes of memory so 4x10=40 size;
cout<<"Size of arr3 is:"<<arr3size/sizeof(int)<<endl;   //this will give actual size of array
char arr4[5]={'r','u','s','h','i'};
//printArray(arr4,5);   //this will give error bcoz our function made for printing character array
cout<<"Printing array 4"<<"   ";
for(int i=0;i<5;i++)
{   
    cout<<arr4[i];
}
   cout<<endl;
bool arr5[3]={true,false};
cout<<"Printing array 5"<<"   ";
for(int i=0;i<3;i++)
{   
    cout<<arr5[i]<<" ";   //1 0 0 will be ans as 1-true and 0-false and 0-garbagevalue
}
   cout<<endl;
float arr6[5]={1,2.0,3.0,4,5};
cout<<"Printing array 6"<<"   ";
for(int i=0;i<5;i++)
{   
    cout<<arr6[i]<<" ";   // 1 2 3 4 5 will be ans as it'll make absolute of float values
}
   cout<<endl;
    int size;
    cin>>size;
//int arr1[size];  very bad practice dont do this  
}
