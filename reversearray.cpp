//input = 1 2 3 4 5
//output = 5 4 3 2 1

#include<iostream>
using namespace std;
int reverse(int array[] , int n )
{
    int start = 0 ;
    int end = n - 1;
    
    for(int i = 0 ; i<n ; i++)
    {
        while (start<=end)
        {
            swap(array[start] ,array[end]) ;
            start++;
            end--;
        }
        
    }

}
void printarray(int array[] , int n)
{
    for(int i = 0 ; i<n  ; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5] ={5, 6,7,8};
    int brr[3] ={1,8,9};

    reverse(arr , 5 );
    reverse(brr , 3);

    printarray(arr , 5);
    printarray(brr , 3);
    
}