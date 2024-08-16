/*
4
34
234
1234
*/
#include<iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int j = 1 ;
        int a = 1+n-i;

        while(j<=i)
        {
            
            cout<<a;
            a = a+1;
            j = j +1;

        }
        cout<<endl;
        i = i +1;
    }
}