/*
****
***
**
*
*/
#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    

    int i = 1;
    while(i<=n)
    {
        int a = n  - i +1;
        while(a)
        {
            cout<<"*";
            a = a - 1 ;
        }
        int j = 1 ;
        while(j<=n)
        {
            j =j + 1;
        }
    
        cout<<endl;
        i = i +1;
        
    }
}
