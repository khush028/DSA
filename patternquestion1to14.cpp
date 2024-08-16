/*problem solving = understand , given value , approach , program
*
**
***
****
*/

// ****
// ****
// ****
// ****
/* #include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<"*";
            j = j+1;
        }
        cout<<endl ;
        i = i+1;
    }

}*/

// 12345
// 12345
// 12345
// 12345
// 12345

/* #include<iostream>
using namespace std ;
int main()
{
    int n ;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<j;
            j = j +1;
        }
        cout<<endl;
        i = i+1;

    }
} */

// 11111
// 22222
// 33333 
// 44444
// 55555
/* #include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;

    int i = 1 ;
    while(i<=n)
    {
        int j = 1;
        while(j <=n)
        {
            cout<<i;
            
            j= j+1;

        }
        cout<<endl;
        i = i+1;

    }
} */

//321
//321
//321

/* #include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter your number";
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            int m  = n - j +1;
            cout<<m;
            j = j +1;
            
            
            
        }
        cout<<endl;
        i = i+1;
    }
}  */

// 1 to 40  print odd 

/* #include<iostream>
using namespace std ;
int main()
{
    int i = 1;
    cout<<"your odd number are"<<endl;
    while(i<=40)
    {
        
        cout<<i<<endl;
        i = i +2;
    }
    
}*/

// print 5 table
/* #include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter your number";
    cin>>n;
    int i = 1;
    while(i<=10)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i = i+1;
    }
}*/

// print seq 15 to 1

/* #include<iostream>
using namespace std;
int main()
{
    int i = 15 ; 
    while(i>=1)
    {
        cout<<i<<endl;
        i = i -1;
    }
    
} */


//  1 2  4 8 16 32 1024

/* #include<iostream>
using namespace std ;
int main()
{
    int i = 1;
    while(i<=1024)
    {
        cout<<i<<"\t";
        i = i*2;
    }
}*/

// 1 to x only even

/*  #include<iostream>
using namespace std; 
int main()
{
    int x ;
    cout<<" enter the value";
    cin>>x;
    int a = 2;
    while(a<=x)
    {
        cout<<a<<endl;
        a = a+2;
    }
} */
    
// 0 + 10 = 10
// 1 + 9 = 10
// 2+ 8 = 10 soon
// 10 + 0 = 10

/* #include<iostream>
using namespace std ;
int main()
{
    int i = 0;
    int n = 10;
    while(i<=10)
    {
        cout<<i<<" + "<<n<<" = "<<i+n<<endl;
        i = i + 1;
        n = n -1;
    }

} */
// value  square  cube
// 1        1        1
// 2        4        8

/* #include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter your specific values";
    cin>>n;
    int i = 1;
    cout<<"value"<<"\t"<<"square"<<"\t"<<"cube"<<endl;
    while(i<=n)
    {
        cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
        i = i +1;

    }
}  */

// value   power  result
// x        1        ?
// x        2        ?
// .        .        .
// x        20       ?


#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
    int  x ;
    
    cout<<"enter x ";
    cin>>x;
    int i = 1;
   
    cout<<"value \t power \t result"<<endl;
    while(i<=20)
    {
        int j =1 ;
        int m = 1;
        while(j<=i)
        {
            m = m * x;
            j= j+1;
        }
        cout<<x<<"\t"<<i<<"\t"<<m<<endl;
        i = i+1;
    }
}