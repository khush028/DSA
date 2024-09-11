// set of bit 
// input = 2 , 3
// output = 3 
// explanation 2 = 10 , 3 = 11 = total 3;

#include<iostream>
using namespace std ;
int bits(int n)
{
    int c= 0;
    while (n!=0)
    {
        if(n&1)
        {
            c++;

        }
        n =n>>1;
    }
    return c;
    
    
}
int add(int a , int b )
{
    int d = bits(a) + bits(b);
    return d;
}
int main()
{
    int a , b;
    cin>>a>>b;
    cout<<"no of bits"<<add(a,b);
}