/*
1
23
456
78910
*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter your input";
    cin>>n;

    int i = 1;
    int c = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<c<<"  ";
            c=c+1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
}