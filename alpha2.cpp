/*
ABC
ABC
ABC
*/
#include<iostream>
using namespace std ;
int main()
{
    int n ; 
    cin>>n ;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        //char ch = 'A' ;
        while(j<=n)
        {
            char c = 'A'+j-1;
            
            cout<<c<<" ";
            //ch = ch + 1 ;
            j = j +1; 
        }
        cout<<endl;
        i = i+1;
    }
}