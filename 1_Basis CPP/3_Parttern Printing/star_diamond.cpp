#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the rows :";
    cin>>n;
   int nsp=n-1;
   int nst=1;
   for( i=1;i<=2*n-1;i++)
   { 
    //space
    for ( j = 1; j <=nsp; j++){
        cout<<" ";
        }
    if (i<=n-1) nsp--;
    else nsp++;
    //star
    for( k=1;k<=nst;k++){
        cout<<"*";
    }
    if(i<=n-1) nst+=2;
    else nst-=2;
    cout<<endl;
   }
}