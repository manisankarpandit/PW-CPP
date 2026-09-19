#include<iostream>
#include<vector>                                               //Leet Code 240
using namespace std;
bool secarchMatrix(vector<vector<int>>&matrix,int target){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int i = 0;
    int j = cols - 1;
    while(i<=rows-1 && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j]>target) j--;
        else i++;
    }
    return false;
}
int main(){
        int rows, cols;
        cout << "Enter number of rows and columns: ";
        cin >> rows >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols));
        cout << "Enter elements:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];  
            }
        }
        int target;
        cout<<"Enter the target :";
        cin>>target;
        secarchMatrix(matrix,target);
        cout << "The 2D Vector is:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        return 0;  
}