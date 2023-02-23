#include<iostream>
using namespace std;
void update1(int arr[],int size)
{
    arr[0]=11;
    //printing array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];      //11 2 3 4 5- this will be output the value of array will be updated.
    }
    cout<<endl;
}
int main()
{
int arr1[]={1,2,3,4,5};
update1(arr1,5);
 for(int i=0;i<5;i++)
    {
        cout<<arr1[i];       //11 2 3 4 5- this will be output the value of array will be updated.
    }
}

/*In case of any variable we see that if we update value of variable in any finction then it onlu updates in that only function
it is not update in main function when we print in both main and made function main will return original vallue and made function will return the 
updated value..
but it is not in the case of array,in array when we give array name as argument to function actually we are not giving whole array 
as input but only the address of 1st element as argument.
if still u r confused refer to love babar dsa series utube lec-9 58:14  
*/