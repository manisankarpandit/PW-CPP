#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the no of rows :";
    cin>>m;
    int n;
    cout<<"Enter the no of column :";
    cin>>n;
    int arr[m][n];
    for(int i = 0;i<m;i++){          //i for rows
        for(int j = 0;j<n;j++){        //j  for columns
            cin>>arr[i][j];
        }
    }
//print
    for(int i = 0;i<m;i++){          //i for rows
        for(int j = 0;j<n;j++){        //j  for columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}