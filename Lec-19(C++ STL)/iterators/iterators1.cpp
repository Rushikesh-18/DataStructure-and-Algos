/*An iterator is any object that, pointing to some element in a range of elements (such as an array or a container),
 has the ability to iterate through the elements of that range using a set of operators (with at least the increment (++) and dereference (*) operators).
 Although vector can be accessed  by for loop but to access other containers Iterator is required. 
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
vector<int> v={1,2,3,4,5};
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
{
cout<<(*it)<<" ";
}
cout<<endl;
vector<pair<int,int>> vp={{1,2},{2,3},{3,4}};
vector<pair<int,int>>::iterator it1;
for( it1=vp.begin();it1!=vp.end();it1++)
{
cout<<(*it1).first<<" "<<(*it1).second<<endl;
}
}