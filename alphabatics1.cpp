/*
AAA
BBB
CCC
*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter your input";
    cin>>n;

    int i =  1;
    int c = 65;
    while(i<=n)
    {
        int j = 1;
        
        while(j<=n){
            
            cout<<char(c);
            
            j = j + 1;

        }
        cout<<endl;
        c = c+1;
        i = i +1;
    }
}