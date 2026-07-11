#include<iostream>
using namespace std;
int main()
{
    int n,i,m,p;
    cout<<"Enter the limits : ";
    cin>>n;
    cout<<"Enter the table'th : ";
    cin>>p;
    for(i=1;i<=n;i++)
    {
        //if(m=p*i)
       // {
            cout<<p<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<m<<endl;
            m=p*i;
        //}
    }
}