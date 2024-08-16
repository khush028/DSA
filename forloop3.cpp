// prime number 
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    bool isprim =1;
    for(int i = 2; i<n ; i++)
    {
        if(n%i==0)
        {
            isprim = 0;
            break;
        }
    }
    if(isprim == 0)
    {
        cout<<" is not a prim no";
    }
    else
    {
        cout<<"prim no";
    }
}
