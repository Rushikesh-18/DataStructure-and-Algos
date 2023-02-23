#include<iostream>
using namespace std;
int main()
{
    /*
    int arr[10]={0};
    cout<<"Address of first memory block of arr is:"<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Addtess of arr using &:"<<&arr[0]<<endl;

    cout<<"*arr will give:"<<*arr<<endl;
    cout<<"*arr +1 will give:"<<*arr+1<<endl;       //it will incrrement value at index 0 by 1
    cout<<"*(arr+1) will give:"<<*(arr+1)<<endl;   //it will give element at index i
    //arr[i]=*(arr+i);
    cout<<endl;


    //ek chalaki dikhata hoon
    int i=3;
    cout<<"i[arr]"<<i[arr]<<endl;     //not give error good for mcq
    */
    /*int arr2[10]={10,20,30,40,50};
    cout<<sizeof(arr2)<<endl;   //4x10=40  //as 10 locations
    //now crreate pointer to array

    int *ptr=&arr2[0];
    cout<<"sizeof(*ptr):"<<sizeof(*ptr)<<endl;
*/

//Now one thing we'll look difference of array and pointer
/*int arr3[10]={1,23,4,5,6,7,8};
cout<<&arr3[0]<<endl;

int *ptr2=&arr3[0];
cout<<&ptr2<<endl;
// It seems like both will give same result but its'not &arr3[0] will give address of o th index of arr3 while &ptr2 will giive address of ptr as both are separate eentities.
    */

int arr4[10]={1,2,3,4,5,6};
//if we do like arr4=arr4+1;
//arr4=arr4+1;
/*array_pointer.cpp: In function 'int main()':
array_pointer.cpp:41:11: error: incompatible types in assignment of 'int*' to 'int [10]'
   41 | arr4=arr4+1;
      |           ^
      */
     //we know if we do cout<<arr4  then it return address of 0th index and if we do arr4+1 it means we are trying to chnage manually address of array thats not possible.Theres entry in symbol table
     //but
int *ptr4=&arr4[0];
cout<<ptr4<<endl;   //0x61fee4
cout<<*ptr4<<endl;  //1
ptr4=ptr4+1;
cout<<ptr4<<endl;   //0x61fee8
//Here actually address is not changed of pointer pointer is just modifiying the content inside it
cout<<*ptr4<<endl;   //2    //pointer chnages it pointing from 0 th index to 1 index.


   






}
