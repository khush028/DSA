#include<iostream>
using namespace std ;
/*void arrayfunc(int arry[] , int n)
{
    int a ;
    cout<<"enter your numbr";
    cin>>a;
    for(int i = 0 ;  i <= n ; i++)
    {
        arry[i] = a ;
        cout<<arry[i]<<" ";
    }
}
int main()
{
    int array[15] ;
    arrayfunc(array,15) ;
} */

void arrayfunc(char arry[] , int n)
{
    char a ;
    cout<<"enter your word";
    cin>>a;
    for(int i = 0 ;  i <= n ; i++)
    {
        arry[i] = a ;
        cout<<arry[i]<<" ";
    }
}
int main()
{
    char array[15] ;
    arrayfunc(array,15) ;
}