// selection sorting
//input = 1 2  0 9 4
//output = 0 1 2 4 9

#include<iostream>
using namespace std ;
void selectionSort(int arr[] , int n )
{
    
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<"your sorted array = " ;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n ; 
    cout<<"enter your size of array =";
    cin>>n;
    int a[100];
    cout<<"enter your array element = ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    selectionSort(a , n );
    
    
}

