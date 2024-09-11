//input = {1 , 2 , 3 , 4 , 5}
//output = {2 , 1 , 4 , 3 ,5}
#include<iostream>
using namespace std ;
void sawwp(int arr[] , int n)
{
    
    for(int i = 0 ; i<n ; i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i] , arr[i+1]);
        }
    }
}
void printaaray(int arr[] , int n)
{
    for(int i = 0 ; i<n ;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

}
int main()
{
    int array[6] = {1,2,3,4,5,6};
    sawwp(array , 6);
    printaaray(array , 6);
}