#include<iostream>
using namespace std ;
int po(int a, int b)
{
    int ans = 1 ;
    for(int i = 1 ; i<=b; i++)
    {
        ans = ans * a;
    }
    return ans;

}
int main()
{
    int a , b;
    cin>>a>>b;
    int ansr = po(a,b);
    cout<<"power="<<ansr;
}