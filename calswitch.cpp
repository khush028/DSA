//make a calculator
#include<iostream>
using namespace std ;
int main()
{
    int n , m ;
    cout<<"enter two no";
    cin>>n>>m;
    int c;
    cout<<"enter your choice /n 1.sum /n 2.sub /n 3.mul /n 4 .div";
    cin>>c;
    int a =c;
    switch (a)
    {
    case 1 :
    
    cout<<n<<"+ "<<m<<" = "<<n+m;
    break;
    case 2 :
    
    cout<<n<<"- "<<m<<" = "<<n-m;
    break;
    case 3 :
    
    cout<<n<<"* "<<m<<" = "<<n*m;
    break;
    case 4 :
    
    cout<<n<<"/ "<<m<<" = "<<n/m;
    break;
    
    
    default: cout<<"error choice";
    break;
    }
    
}