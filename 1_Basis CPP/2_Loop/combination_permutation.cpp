#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    int nfact=1;
    for(int i=2;i<=n;i++)
    {
        nfact *= i; //n!
    }
    int rfact=1;
    for(int j=2;j<=r;j++)
    {
        rfact *= j;  //r!
    }
    int nrfact=1;
    for(int k=2;k<=n-r;k++)
    {
        nrfact *= k;  //(n-r)!
    }
    int ncr = nfact/(rfact*nrfact);
    int npr = nfact/nrfact;
    cout<<"combination :"<<ncr<<endl;
    cout<<"permutation :"<<npr;

}
