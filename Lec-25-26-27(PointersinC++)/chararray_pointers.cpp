#include<iostream>
using namespace std;
int main()
{
//We'll see of char array
//Firstly we'll see whats in int array we'll learn distinguishly


int arr1[5]={1,2,3,4,5};
char ch1[5]="rush";   //4 letters and 5 '/0' character

//Now according to our understanding we'll print address of both arrays

cout<<"int arr1:"<<arr1<<endl;              //int arr1:0x61fefc
cout<<"char ch1:"<<ch1<<endl;               //char ch1:rush

//Heere we can see that arr1 printed its address of index 0 but ch1 printed its content
//That's the difference betn int array and char array'

//Now we'll try to access boths address by pointer

int *ptr1=&arr1[0];
char *ptr2=&ch1[0];

cout<<ptr1<<endl;          //0x61fef4
cout<<ptr2<<endl;          //rush
//With ppointer also we are not able to access address of ch1 prints till /0 character uis not found;
//very important in terms of MCQ
//Now if we dont find '/0' character

char ch='r';
char *ptr3=&ch;
cout<<ptr3<<endl;        //rrush //This bcoz in out memory r get stored in memory block sequentially and printed till null character  



}