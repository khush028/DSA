#include<iostream>
using namespace std;
int sum(int a , int b)
{
    int c;
    c = a +b ;
    return c ;
}
int main()
{
    int a, b;
    cout<<"enter two no";
    cin>>a>>b;
    int ans = sum(a,b);
    cout<<a<<"+"<<b<<"="<<ans;
}