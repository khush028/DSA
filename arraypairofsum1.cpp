//input = 1 2 3 4 5
//output = 1 4  2 3
#include<iostream>
using namespace std ;
int sum(int a[] , int n , int k )
{
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            for(int m = j +1 ; m<n ; m++)
            {
                 if(a[i] + a[j] +a[m] == k)
            {
                cout<<"pairs are ="<<a[i]<<" "<<a[j]<<" "<<a[m]<<endl;
            }

            }
            
        }
    }
}
int main()
{
    int a[5] = {1,2,3,4,1};
    sum(a,5,5);

    
}
