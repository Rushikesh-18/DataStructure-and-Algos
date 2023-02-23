#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr1[100],arr2[100],m,n,sum;
vector<int> v;
cout<<"Enter the no of elements you want to emter in arr1[]:";
cin>>m;
for(int i=0;i<m;i++)
{
    cin>>arr1[i];
}
cout<<"Enter the no of elements you want to emter in arr2[]:";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr2[i];
}
int carry=0;
int i=m-1;
int j=n-1;
while(i>=0 && j>=0)
{
    int val1=arr1[i];
    int val2=arr2[j];
    sum=val1+val2+carry;
    sum=sum%10;
    carry=sum/10;
    v.push_back(sum);
    i--;
    j--;
}
while(i>=0)
{
    int val1;
    sum=val1+carry;
    sum=sum%10;
    carry=sum/10;
    v.push_back(sum);
    i--;  
}
while(j>=0)
{
    int val2;
    sum=val2+carry;
    sum=sum%10;
    carry=sum/10;
    v.push_back(sum);
    j--;  
}
while (carry!=0)
{
    sum=carry;
    sum=sum%10;
    carry=sum/10;
    v.push_back(sum);
    i--;
    j--;
}

for(auto i:v)
{
cout<<v[i];
}

}