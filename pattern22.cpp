/*
1234554321
1234**4321
123****321
12******21
1********1
**********
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
        int k = n-i+1;
        int a = 1;
        while (k)
        {
            cout<<a;
            a = a +1 ;
            k= k -1;
        }
        int star = (i - 1)*2;
        
        while (star)
        {
            cout<<"*";
            star = star - 1;
        }
        /*int sstar = i -1 ;
        while(sstar)
        {

            cout<<"*";
            sstar = sstar - 1;
        }*/
        int y = n - i + 1;
        
        while (y)
        {
            cout<<y;
            
            y = y -1;
        }
        
        
        int j = 1;
        while (j<=n)
        {
            j = j +1;
        }
        
        
        cout<<endl;
        i = i +1;
        
    }
}