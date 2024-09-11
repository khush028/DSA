// input = {1,2,7,3,0}
//output = 2
//explain = fing highst occurence

#include<iostream>
using namespace std;
int mountain(int array[] , int n )
{
    int start = 0 , end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = 0 ;
    while(start< end)
    {
        if(array[mid]<array[mid+1])
        {
            start = mid +1;
        }
        else
        {
            end = mid ;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int a[5] ={1,10,15,5,0};
    cout<<mountain(a,5);


}
