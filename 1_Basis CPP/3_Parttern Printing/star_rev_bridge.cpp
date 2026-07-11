#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the num of row :";
    cin>>n;
    int m = n-1;
    int nsp=2*n-1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=nsp;k>=1;k--)
        {
            cout<<"*";
        }
        nsp-=2;
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
         for(i=1;i<=2*n-1;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
}