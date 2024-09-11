//input = 1,2,3,4,5,2
//output = 2
//expalin =  you have [1, n-1] element means arr[6] -= element {1,5} one elment repeat in this 
// to approach count  , xor

#include<iostream>
using namespace std ;
int dublicate(int array[] , int size)
{
    int ans = 0 ;
    for(int i = 0 ; i<size ;i++)
    {
        ans = ans^array[i];

    }
    for(int i = 1 ; i<size ; i++)
    {
        ans = ans ^ i ;
    }
    return ans ;
}

int main()
{
    int n ;
    cout<<"enter your size"<<endl;
    cin>>n;
    int a[100];
    cout<<"enter your elment in range of = [1,n-1]" <<endl;
    for(int i =0; i<n ;i++)
    {
        cin>>a[i];
    }
    cout<<dublicate(a,n);
}