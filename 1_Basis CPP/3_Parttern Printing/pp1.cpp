#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"Enter the number of rows :";
    cin>>n;
    cout<<"Enter the number of column :";
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}