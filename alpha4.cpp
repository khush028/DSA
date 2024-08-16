/*
abc
bcd
cde
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your input";
    cin>>n;
    int i = 1;
    char c = 'A';
    while(i<=n)
    {
        int j = 1;
        char ch = c ;
        while(j<=n)
        {
            cout<<ch;
            ch = ch+1;
            j = j+1;
        }
        cout<<endl;
        c = c +1;
        i = i +1;
        
    }
}