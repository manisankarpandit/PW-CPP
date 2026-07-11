#include<iostream>
using namespace std;
int main()
{   
    cout<<"Enter the limit : ";
    int i,a=1,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a=a*2;
    }
}