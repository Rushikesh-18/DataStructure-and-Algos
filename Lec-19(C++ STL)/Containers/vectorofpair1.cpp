#include<bits/stdc++.h>
using namespace std;
void printvect(vector<pair<int,int>>&v)
{
    for(int i=0;i<v.size();i++)
    {
    cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<"After push_back:";
    v.push_back({4,5});
}
int main()
{
vector<pair<int,int>>v={{1,2},{2,3},{3,4}};//Declaration
printvect(v);
printvect(v);

}