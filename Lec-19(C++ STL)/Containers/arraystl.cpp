#include<iostream>
#include<array>
using namespace std;
int main()
{
int basic[4]={1,2,4,4};    //Basic array

array<int,4> a={1,2,3,4};    ///stl array   array<datatype,size> arrayname={.,.,.,}; 
array<int,4> b={5,6,7,8};
//Operations on array :- 
//1. at() :- This function is used to access the elements of array. 
cout<<"Element at index 2 is:"<<a.at(2)<<endl;

//2. get() :- This function is also used to access the elements of array. 
//This function is not the member of array class but overloaded function from class tuple. 
cout<<"Element at index 1 is:"<<get<1>(a) <<endl;

//4. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.
cout<<"Element at index 4  is:"<<a[4]<<endl;

//4. front() :- This returns the first element of array.
cout<<"First element of array is:"<<a.front()<<endl;

//5. back() :- This returns the last element of array.
cout<<"Last element of array is:"<<a.back()<<endl;

//6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack.
cout<<"Size of array is:"<<a.size()<<endl;

//7. max_size() :- It returns the maximum number of elements array can hold 
//i.e, the size with which array is declared. The size() and max_size() return the same value.
cout<<"Max elements array canhold are:"<<a.max_size()<<endl;

//8. swap() :- The swap() swaps all elements of one array with other.
 cout << "The first array elements before swapping are : ";
    for (int i=0; i<4; i++)
    cout << a[i] << " ";
    cout << endl;
    cout << "The second array elements before swapping are : ";
    for (int i=0; i<4; i++)
    cout <<b[i] << " ";
    cout << endl;
 
    // Swappingb values with a
    a.swap(b);
 
    // Printing 1st and 2nd array after swapping
    cout << "The first array elements after swapping are : ";
    for (int i=0; i<4; i++)
    cout << a[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i=0; i<4; i++)
    cout <<b[i] << " ";
    cout << endl;

// 9. empty() :- This function returns bool true when the array size is zero else returns false. 
cout<<"IsEmpty or Not"<<a.empty()<<endl;

//10. fill() :- This function is used to fill the entire array with a particular value.
b.fill(0);
for (int i=0; i<4; i++)
    cout << b[i] << " ";

return 0;
}