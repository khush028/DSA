//ap =3*n + 7
#include<iostream>
using namespace std;
int ap(int n)
{
    int m = 3 * n + 7;
    return m ;

}
int main()
{
    int n ;
    cin>>n;
    int ans = ap(n) ;
    cout<<3<<"*"<<n<<"+"<<7<<"="<<ans;

}