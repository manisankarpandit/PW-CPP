#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the limit :";
    cin>>n;
    int x=0,y=1,z=0;
    if(n==1)
    {
        cout<<x;
    }
    else if(n==2)
    {
        cout<<y;
    }
    else{
         cout<<x<<" "<<y;    
    for ( i = 3; i <= n; i++)
    {
        z=x+y;
       cout<<" "<<z;
       x=y;
       y=z;
       z=x;
    }
    }
    
}