#include<iostream>
using namespace std;
void swapalternate(int arr[],int size)
{
for(int i=0;i<size;i=i+2)
{
if(i+1<size)
{
    swap(arr[i],arr[i+1]);  //builtin swap method
    /*temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;*/
}
}
}
void printarr(int arr[],int size)
{
 for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
int arreven[]={1,2,3,4,5,6};
int arrodd[]={1,2,3,4,5};
swapalternate(arreven,6);
swapalternate(arrodd,5);
printarr(arreven,6);
printarr(arrodd,5);

}
