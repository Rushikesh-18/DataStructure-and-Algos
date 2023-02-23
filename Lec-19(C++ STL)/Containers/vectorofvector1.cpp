#include<bits/stdc++.h>
using namespace std;
void printvect(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
vector<vector<int>> v;
int n;
cout<<"Enter the no of vectors you want to add:";
cin>>n;
for(int i=0;i<n;++i)
{
    vector<int> temp;
    cout<<"Enter the size of "<<i<<"th vector:";
    int N;
    cin>>N;
    for(int j=0;j<N;j++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
}
v.push_back(vector<int> ());
v[0].push_back(10);
for(int i=0;i<v.size();++i)
{
    printvect(v[i]);
}
 /* 1 2 3 10 
    1 2 3 4
    1 2 3
    1 2 3 4*/

}