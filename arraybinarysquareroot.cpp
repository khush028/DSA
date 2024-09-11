// input = 25 
// output = 5 
// using binary search in this .
#include<iostream>
using namespace std ;
long long int squarroot( int n)
{
    int start = 0;
    int end = n ;
    long long int mid = start + (end - start) / 2;
    while (start<=end)
    {
        long long int square = mid * mid ;
        if(square > n)
        {
            end = mid - 1 ;

        }
        else if(square<n)
        {
            start = mid + 1;

        }
        else if(square == n)
        {
            return mid ;
        }
        mid = start +(end -  start) / 2;
        
    }
    
}
int main()
{
    int num ;
    cout<<"enter your number";
    cin>>num ;
    cout<<"your square root ="<<squarroot(num);
}