#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,m;
    cout<<"Enter the rows :";
    cin>>n;
    for( i=1;i<=n;i++)
    {   
        for( k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for( j=1;j<=i;j++)
        {
            cout<<j;
        }
        for( m=i-1;m>=1;m--)
        {
            cout<<m;
        }
        cout<<endl;
    }
}