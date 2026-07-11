#include<iostream>
using namespace std;
int main()
{
    int product = 1;
    int n;
    cin>>n;
    int num[n];
    cout<<"Enter the numbers of array :"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>num[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        product *= num[i];
    }
    cout<<product;
}