#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the num of rows :";
    cin>>n;
    int nsp=2*n-1;
    for(i=1;i<=n;i++)
    {
        for(j=nsp;j>=1;j--)
        {
            cout<<"*";
        }
        nsp-=2;
        cout<<endl;
    }
}