#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> v1;
//size() – Returns the number of elements in the vector.
cout<<"Size of vector v1 is:"<<v1.size()<<endl; //// default during initilization size is 0;

//max_size() – Returns the maximum number of elements that the vector can hold.
cout<<"MaxSize of vector v1 is:"<<v1.max_size()<<endl;

//capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
cout<<"Capacity of vector v1 is:"<<v1.capacity()<<endl;

////resize(n) – Resizes the container so that it contains ‘n’ elements.
v1.resize(5);
cout<<"Capacity of vector v1 is:"<<v1.capacity()<<endl;

//empty() – Returns whether the container is empty.
cout<<"IsEmpty vector v1 is:"<<v1.empty()<<endl;

//


}