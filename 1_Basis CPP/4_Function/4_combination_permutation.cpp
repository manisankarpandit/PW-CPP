#include<iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for(int i=2;i<=x;i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int n,r;
    cout<<"n = ";
    cin>>n;
    cout<<"r = ";
    cin>>r;
    int nfact = fact(n);
    int  rfact= fact(r);
    int nrfact =fact(n-r);
    int ncr = nfact/(rfact*nrfact);
    int npr = nfact/nrfact;
    cout<<"Permutation :"<<npr<<endl;
    cout<<"combination :"<<ncr;
}
// -------------------------Another way----------------------------
// int fact(int x)
// {
//     int f = 1;
//     for(int i=2;i<=x;i++)
//     {
//         f *= i;
//     }
//     return f;
// }
// int combination(int n ,int r)
// {
//     int ncr = fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
// int permutation(int n,int r)
// {
//     int npr = fact(n)/fact(n-r);
//     return npr;
// }
// int main()
// {
//     int n,r;
//     cout<<"n = ";
//     cin>>n;
//     cout<<"r = ";
//     cin>>r;
//     int ncr = combination(n,r);
//     int npr = permutation(n,r);
//     cout<<"Permutation :"<<npr<<endl;
//     cout<<"combination :"<<ncr;
// }
