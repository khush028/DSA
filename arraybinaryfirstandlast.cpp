// input = 0 1 1  2 2 2 2 2
// output = 3 7
/*#include<iostream>
using namespace std ;
int firstandlast(int array[] , int n , int k){
    for(int i = 0 ; i<n ; i++)
    {
        if(array[i]==k)
        {
            cout<<"your element first occurence at positon"<<i<<endl;
            break;
        }
    }
    for(int j = n-1 ; j<n ; j--)
    {
        if(array[j]==k)
        {
            cout<<"your element last occurence at positon"<<j<<endl;
            break;
        }
    }
}
    
int main()
{
    int a[6] = {0,1,2,15,2,13};
    firstandlast(a , 6 , 2);

}*/

#include<iostream>
using namespace std ;
int firstandlast(int array[] , int n , int k)
{
    int start = 0;
    int end = n - 1 ;
    int mid = start + (end - start)/2;
    if(array[mid]==k)
    {
        for(int i = start ; i<mid ; i++)
        {
            if(array[start]==k)
            {
                cout<<start;
            }
        }
    }
}
 
 int main()
{
    int a[6] = {0,2,2,2,4,5};
    firstandlast(a,6,2);

}