#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the no of rows and column :";
    cin>>m;
    // int n;
    // cout<<"Enter the no of column :";
    // cin>>n;
    int arr[m][m];
    for(int i = 0;i<m;i++){          //i for rows
        for(int j = 0;j<m;j++){        //j  for columns
            cin>>arr[i][j];
        }
    }
//print
    for(int i = 0;i<m;i++){          //i for rows
        for(int j = 0;j<m;j++){        //j  for columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // store transpose
//   int t[m][m];
  for(int i = 0;i<m;i++){
    for(int j = i+1; j<m ; j++){
       int temp = arr[i][j];
       arr[i][j] = arr [j][i];
       arr[j][i] = temp;
    }
  }
  for(int i = 0;i<m;i++){
    for(int j = 0; j<m ; j++){
       cout<< arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}