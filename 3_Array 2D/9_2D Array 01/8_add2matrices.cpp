#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the 1st matrix of rows :";
    cin>>m;
    int n;
    cout<<"Enter the 1st matrix of column :";
    cin>>n;
    int arr[m][n];
    for(int i = 0;i<m;i++){          
        for(int j = 0;j<n;j++){        
            cin>>arr[i][j];
        }
    }
    int a;
    cout<<"Enter the 2nd matrix of rows :";
    cin>>a;
    int b;
    cout<<"Enter the 2nd matrix of column :";
    cin>>b;
    int brr[a][b];
    for(int i = 0;i<a;i++){          
        for(int j = 0;j<b;j++){        
            cin>>brr[i][j];
        }
    }
                                //with creating extra array
    // int x;
    // int y;
    // int res[x][y];
    // for(int i = 0;i<x;i++){
    //     for(int j = 0;j<y;j++){        
    //        res[i][j] = arr[i][j] + brr[i][j];
    //     }
    // }

    // for(int i = 0;i<x;i++){          
    //     for(int j = 0;j<y;j++){       
    //        cout<<res[i][j]<<" ";
    //     }
        
    // }

                                   //without creating extra array
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] += brr[i][j];
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
} 