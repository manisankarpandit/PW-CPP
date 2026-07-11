#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf = 1;
    // for(int i=min(a,b);i>=1;i--)
    for(int i=1;i<=min(a,b);i++)
    {
        if (a%i == 0 && b%i == 0)
        {
           hcf = i;
        //    break;
        }
    }
     return hcf;
}
int main()
{
    int a;
    cout<<"Enter the 1st num : ";
    cin>>a;
    int b;
    cout<<"Enter the 2nd num : ";
    cin>>b;
    cout<<gcd(a,b);
}