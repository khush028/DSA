/*
   1
  121
 12321
1234321   
*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int space = n - i ;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }
        int j = 1;
        while(j<=i)
        {
            cout<<j ; 
            j= j +1;
        }
        
        int a = i -1 ;
        
        while(a)
        {
            cout<<a ;
            
            a = a-1;
        }
        
        cout<<endl;
        i = i + 1;
        
        
    }

}