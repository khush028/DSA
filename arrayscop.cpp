#include<iostream>
using namespace std;
int outsid(int num[] , int n )
{
    cout<<"insid th function =";
    for(int i = 0 ; i<n ;i++)
    {
        
        cout<<num[i];
    }
    cout<<endl;
    cout<<"rturn to main function"<<endl;
}
int main()
{
    int arr[3] = {1,2,3};
    outsid(arr , 3);
    cout<<"hllo into the main function"<<endl;
    for(int i = 0; i<3 ;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;


}