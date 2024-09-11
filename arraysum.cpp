//find sum od all element in an array 

#include<iostream>
using namespace std ;
int sum(int arr[] , int n)
{
    int sum = 0;
    for(int i = 0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    
    return sum ;

}
int main()
{
    int size ;
    cout<<"enter your size";
    cin>>size ;
    int num[100];
    cout<<"enter your element";
    for(int i = 0 ; i<size ; i++)
    {
        cin>>num[i];
    }
    cout<<"your sum of an element ="<<sum(num,size);

}