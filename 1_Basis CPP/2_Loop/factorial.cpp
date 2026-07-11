#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the num :";
    cin>>n;
    int product=1;
    for(i=1;i<=n;i++)
    {
        product *= i;
        cout<<i<<"!"<<" "<<"="<<" "<<product<<endl;   
    }
    // cout<<n<<"!"<<" "<<"="<<" "<<product;
}