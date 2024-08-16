/*
1234
 234 
  34
   4
*/
#include<iostream>
using namespace std ;
int main()
{
    int n ; 
    cin>>n ; 
    int i= 1;
    int c= 1;
    
    while(i<=n)
    {
        int space = i -1;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int k = c;
        int j = 1;
        while(j<=n and k<=n)
        {
            cout<<k;
            k = k +1;
            j = j +1;
        }
        cout<<endl;
        i = i +1;
        c=c+1;
        
    }
}