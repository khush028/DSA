//input = {7,9,1,2,3}
//output = pivot = 1

#include<iostream>
using namespace std;
int pivot(int array[] , int n )
{
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;
    while (s<e)
    {
        if(array[mid] >= array[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
    
}
int main()
{
    int a[5] = {11 ,12,13,9 , 10};
    cout<<pivot(a,5);
}