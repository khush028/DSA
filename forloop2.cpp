// fibonacci series = 0 ,1,1,2,3,5,8,13,21....
#include<iostream>
using namespace std ;
int main()
{
    int m;
    cin>>m;
    int a = 0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1 ;i<=m;i++)
    {
        
        int c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
       
    }
   
}