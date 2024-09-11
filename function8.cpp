//fibonaci sris\
// 0 , 1 , 2,3,5,8,13

#include<iostream>
using namespace std ;
int fibonaci(int n)
{
    int a = 0;
    int b = 1;
    int c ;
    cout<<a<<" "<<b<<" ";
    for(int i = 1 ; i <= n ;i++)
    {
        c = a + b ;
        cout<<c<<" ";
        a = b;
        b = c;
        
        
        
    }
    
}
int main()
{
    int n ;
    
    cin>>n;
    
    fibonaci(n);
    
   

}