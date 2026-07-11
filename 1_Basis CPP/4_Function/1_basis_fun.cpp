#include<iostream>
using namespace std;
void star()
{   
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    star();
    cout<<"Hello"<<endl;
     star();
}