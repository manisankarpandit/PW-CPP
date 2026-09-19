#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m;
    cout << "Enter the rows of matrix :";
    cin >> m;
    int n;
    cout << "Enter the columns of matrix :";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maxSum = INT_MIN;
    int maxRow = -1;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << maxSum << " " << maxRow;
}