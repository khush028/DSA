// ncr =  n!/ r!(n-r)!

#include<iostream>
using namespace std ;
int fact(int m )
{
    int mul = 1;
    for(int i = 2 ; i <=m; i ++){
        int mul = mul * i;
    }
    return mul ;
    
}
int nCr(int n , int r)
{
    int num = fact(n);
    int dem = fact(r) * fact(n-r);
    return num/dem;
}
int main()
{
    int n ,r;
    cout<<"enter your n and r";
    cin>>n>>r;
    int final =  nCr(n,r);
    cout<<"your nCr is"<<final;

}
