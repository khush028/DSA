//linar sarch 
#include<iostream>
using namespace std;
int Search(int arr[] , int n , int ky)
{
    for(int i = 0 ; i<n ;i++)
    {
        if(arr[i] == ky)
        {
            return 1;
        }
    }
    return 0;
    
    
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<"enter your key";
    int key;
    cin>>key;
    cout<<"your array is =";
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int found = Search(arr , 5 , key);
    if(found)
    {
        cout<<"key is present";
    }
    else
    {
        cout<<"key not present";
        
    }
    
    

}