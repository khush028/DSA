// input = 1 2 3 4 5
// sum = 5
//output = 1 4 and 2 3

#include<iostream>
#include<vector>
using namespace  std ;
vector<vector<int>> sum(int a[] , int n , int k)
{
    vector<vector<int>> ans ;
  

    for(int i = 0 ; i <n ; i++)
    {
        for(int j =i+ 1 ; j<n ; j++)
        {
            if(a[i] + a[j] == k )
            {
                vector<int> temp ;
                temp.push_back(min(a[i] ,a[j]));
                temp.push_back(max(a[i] ,a[j]));
                ans.push_back(temp);}
        }
    }
    return ans ;
    
}
int main()
{
    int a[6] = {1,2,3,4,3,6};
    vector<vector<int>> c = sum(a,6,5);
    for(int i = 0 ; i<c.size() ; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
