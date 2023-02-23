#include<bits/stdc++.h>
using namespace std;
void printvect(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
    cout<<v[i];
    }
}
int main()
{
    cout<<"Enter no of vectors you want t0 nake as array:";
    int n;
    cin>>n;
    vector<int> v[n];  //No of vectors     |  |  |  |  |  |=5 vectors
    for(int i=0;i<n;i++)
    {
        cout<<"Enter size of "<<i<<" th vector:"; 
        int N;         //                  |  |=size of each vector     
        cin>>N;
            for(int j=0;j<N;j++)
            {
                cout<<"Enter the contents of "<<j<<"th vector:";
                int x;
                cin>>x;
                v[i].push_back(x);
            }
    }
    for(int i=0;i<n;i++)
    {
        printvect(v[i]);
        cout<<endl;
    }

}