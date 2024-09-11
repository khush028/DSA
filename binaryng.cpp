#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n ; 
    cin>>n;
    int ans = 0;
    int i =0;
    int m ;
    int first ;
    
    while (n!=0)
    {
        if(n<0)
        {
            n= n * (-1);
            int bit = n & 1;
            ans = (bit * pow(10,i)) + ans ;
            n = n>>1;
            i ++ ;
            first = (~ans);
            first = first + 1 ;
        }
        cout<<first;  
        
        
    }
    
    
    
}