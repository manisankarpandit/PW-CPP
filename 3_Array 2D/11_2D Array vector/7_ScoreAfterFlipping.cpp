#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>>&grid){                              //Leet Code 861
    int rows = grid.size();
    int cols = grid[0].size();
                            //step 1  :- making the first columns all 1's
    for(int  i = 0;i<rows;i++){
        if(grid[i][0]==0){
            for(int j = 0;j<cols;j++){
                if (grid[i][j]==0)
                    grid[i][j]=1;
                else
                    grid[i][j]=0;
            }
        }
    }
                           //step 2  :- flip the columns where no0>no1
    for(int j=0;j<cols;j++){
        int no0 = 0;
        int no1 = 0;
        for(int i = 0;i<rows;i++){
            if(grid[i][j]==0)  no0++; //zero count
            else no1++;  //one count
        }

        if(no0>no1){ //flip
            for(int i = 0;i<rows;i++){
                if (grid[i][j]==0)
                    grid[i][j]=1;
                else
                    grid[i][j]=0;
            }
        }
    }
    //sums
    int sum = 0;
    for(int i=0;i<rows;i++){
        int x = 1;
        for(int j = cols-1;j>=0;j--){
            sum += grid[i][j]*x;
            x *= 2;
        }
    }
    return sum;
}
int main(){
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int>> grid(rows, vector<int>(cols));
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];  // Taking input
        }
    }
    matrixScore(grid);
    cout << "The 2D Vector is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


}