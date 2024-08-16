/*
****
 ***
  **
   *
*/

#include<iostream>
using namespace std ;
int main()
{
   int n ;
   cin>>n;

   int i =1 ;
   while(i<=n)
   {
      int space = i-1;
      while(space)
      {
         cout<<" ";
         space = space - 1;
      }
     
      int k = n-i+1;
      while(k)
      {
         cout<<"*";
         k = k - 1;
        
      }
      int j = 1;
      while(j<=n)
      {
         j = j + 1;
      }
      cout<<endl;
      i = i +1;
   }
}