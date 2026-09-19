#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m = matrix.size(); // rows
    int n = matrix[0].size();//column
    //int t[n][m];
    vector<vector<int>>t(n,vector<int>(m));
     for(int i = 0;i<n;i++){
        for(int j = 0; j<m ; j++){
             t[i][j] = matrix[j][i];
             }
         }  
        return t;   
}
                                                         //   leetcode 867
    int main(){
    int n ;
    cout<<"Enter the size of row :"<<endl;
    cin>>n;
    int m ;
    cout<<"Enter the size of column :"<<endl;
    cin>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    transpose(arr);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<endl;
        }
    }
    // transpose(arr);
 }

   