// input =  1 2 3 4 5
//input = 1 2 3
// output = 1 2 3


#include<bits/stdc++.h>
using namespace std ;
vector<int> intersection( vector<int>a , vector<int>b)
{
    int i =0 , j = 0;
    vector<int> ans ;
    while (i<a.size() && i<b.size())
    {
        if(a[i]== b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans ;
    
}
int main()
{
    vector<int> a  {1,2,3,4,5};
    vector<int> b  {1,2,3};
    
    vector<int> c = intersection(a,b);
    for(int i = 0 ; i<c.size() ; i++)
    {
        cout<<c[i] <<" ";
    }
    return 0;
    
}