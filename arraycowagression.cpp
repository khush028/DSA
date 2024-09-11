// you are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
//You are also given an integer 'k' which denotes the number of aggressive cows.
//You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
//Print the maximum possible minimum distance.
//input 4 1 2 3 6
//output max distance = 5
#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std ;
bool ispossible(int array[] , int n , int k  , int mid)
{
    int cow = 1;
    int last = array[0] ;
    for (int i = 0; i <n; i++)
    {
        if(array[i] - last >= mid)
        {
            cow ++;
            if(cow==k)
            {
                return true ;
            }
            last = array[i];
        }
    }
    return false;
}
int cowAgression(int array[] , int n , int k)
{
    sort(array.begin(),array.end());
    int start = 0;
    int maximun  = - 1;
    for (int i = 0; i < n; i++)
    {
        maximun = max(maximun,array[i]);
    }
    int end = maximun;
    int ans = - 1;
    int mid = start + (end - start) / 2;
    while (start<=end)
    {
        if( ispossible(array,n,k, mid))
        {
            ans = mid ;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
        
    }
    return ans ;
    
}
int main()
{
    int array[5] = {4,2,1,3,6};
    cout<<cowAgression(array , 5 , 2);

}