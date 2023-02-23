#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> v2;
//assign() – It assigns new value to the vector elements by replacing old ones
v2.assign(3,5);
 for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
cout<<endl;

//push_back() – It push the elements into a vector from the back
v2.push_back(15);
 for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
cout<<endl;

//pop_back() – It is used to pop or remove elements from a vector from the back.
v2.pop_back();
 for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
cout<<endl;
//insert() – It inserts new elements before the element at the specified position
v2.insert(v2.begin(),10);
for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
 cout<<endl;   
//erase() – It is used to remove elements from a container from the specified position or range.
v2.erase(v2.begin());
for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
cout<<endl;
//clear() – It is used to remove all the elements of the vector container
v2.clear();
for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
cout<<endl;

}