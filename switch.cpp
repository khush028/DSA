/* #include<iostream>
using namespace std ; 
int main()
{
    int n =2;
    

    switch (n)
    {
    case 1 :
    cout<<"first"<<endl;
    break;
    case 2 :
    cout<<"second "<<endl;
    break;
    default:cout<<"fail";
        break;
    }
}*/

#include<iostream>
using namespace std ; 
int main()
{
    int n = 2;
    int m = 2;
    

    switch (n)
    {
        case 1 :cout<<"first"<<endl;
        break;
        case 2 :switch (m)
    {
        case 2:
        cout<<"your numbr is="<<n<<endl;
        break;
    }
    break;
    default:cout<<"fail";
    break;
    }
}