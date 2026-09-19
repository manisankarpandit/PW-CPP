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

    //method 1
//print
    // for(int i = 0;i<m;i++){          //i for rows
    //     for(int j = 0;j<n;j++){        //j  for columns
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // transpose
    // for(int j = 0;j<n;j++){          //i for column
    //     for(int i= 0;i<m;i++){        //j  for rows
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //method 2
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0;i<m;i++){          //i for rows
        for(int j = 0;j<n;j++){        //j  for columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}