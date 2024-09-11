//input = 5 , 6 , 7 , 8 , 9
//output = max is 9
// min is 5;
#include<iostream>
using namespace std ;
int max(int num[] , int n )
{
    int max = INT16_MIN ;
    for(int i = 0 ; i<n ;i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    return max ;

}
int min(int num[] , int n )
{
    int min = INT16_MAX ;
    for(int i = 0 ; i<n ;i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    return min ;

}
int main()
{
    int size;
    cout<<"enter you size in range(1-100)";
    cin>>size;
    int num[100];
    for(int i = 0 ; i < size ; i ++)
    {
        
        cin>>num[i];
        
    }
    cout<<"maximun is"<<max(num,size)<<endl; 
    cout<<"minimun is "<<min(num,size);
}