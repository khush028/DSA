//bubble sorting 
// input = 10 2 6 7 0
// output = 0 2 6 7 10

#include<iostream>
using namespace std ; 
void bubbleSort(int arr[] ,  int n )
{
    for (int i = 1 ; i < n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] ,arr[j+1]);
            }
        }
        
    }
    cout<<"your sorted array by bubble sort is ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}
int main()
{
    int n ; 
    cout<<"enter your size of array";
    cin>>n ;
    int a[100] ;
    cout<<"enter your element of array";
    for(int i = 0 ; i< n ; i++)
    {
        cin>>a[i];
    }
    bubbleSort(a,n);
}