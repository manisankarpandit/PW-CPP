#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    int m = matrix.size();                                      // Leet Code 48
    //  transpose
    for (int i = 0; i <= m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // reverse each row
    for (int k = 0; k < m; k++) // reverse each row            //problem
    {
        int i = 0;
        int j = m - 1;
        while (i <= j)
        {
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
    }
}
int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare a 2D vector
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input values
    cout << "Enter elements of the :\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    // Display the matrix
    cout << "\nMatrix is:\n";
    //  rotate(matrix);
    for (const auto &row : matrix)
    {
        for (const auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
 rotate(matrix);
      for (const auto &row : matrix)
    {
        for (const auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}
