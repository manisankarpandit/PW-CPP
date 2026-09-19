#include<iostream>
using namespace std;
int main()
{
    // int arr[3][3];
    // //rows -> 3          0 to 2
    // // columns -> 3      0 to 2
    // cout<<arr[0][0];


    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // same as
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // cout<<arr[1][2];

    //using loop
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i<=2;i++){          //i for rows
        for(int j = 0;j<=2;j++){        //j  for columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}