// 1 2 3
// 4 5 6
//7 8 9
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your input";
    cin>>n;
    int c = 1;
    int i=1;
    while(i<=n)
    {
        int j  = 1;
        while(j<=n)
        {
            cout<<c<<" ";
            c = c+1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
}