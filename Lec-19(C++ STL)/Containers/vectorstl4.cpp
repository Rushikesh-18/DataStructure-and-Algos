#include<bits/stdc++.h>
using namespace std;
void printvect(vector<int>v)     //Passing vectors in function creates copy
{
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
    v.push_back(6);   //This change will not refflect if we don't made refernce 
}
void printvectstr(vector<string>v3)     //Passing vectors in function creates copy
{
    for(int i=0;i<v3.size();i++){
        cout<<v3[i];
    }
}
int main()
{
//Vectors are sequence containers representing arrays that can change in size.
//vector is alzo called resizable array at run time
int a[10];   //This reserves 10 memory block at compile time
vector<int> v; 
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
printvect(v);
cout<<" Vector v after pop_back:";
v.pop_back();              //Delete last element 
printvect(v);
//int b[10]=a[10]; we cannot copy array something we can do with pointer but that also will create references to original array 
//but in case of vectors-(We can copy)
vector<int> v2=v;
cout<<" Vector v2 is:"; //this is copy can in v2 will not reflect in v; T.C of copying is-0(n);
printvect(v);
cout<<endl;
cout<<" Vector v is with/without reference:"; 
printvect(v);
vector<string> v3;
v3.push_back("Rushikesh");
v3.push_back(" is");
v3.push_back(" good");
v3.push_back(" boy");
printvectstr(v3);

}