#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the rows of matrix :";
    cin>>m;
    int n;
    cout<<"Enter the columns of matrix :";
    cin>>n;
    int arr[m][n];
    for(int i = 0;i< m;i++){
        for(int j = 0;j< n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
                                    //row wise print
    // for(int i = 0;i<m;i++){
    //     if(i%2==0){
    //         for(int j = 0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else // i = 1 3 5
    //     for(int j = n-1;j>=0;j--){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
                                     //column wise print
    for(int j = 0;j< n;j++){
        for(int i = 0;i< m;i++){
            cout<<arr[i][j]<<" ";
        }
    }

}