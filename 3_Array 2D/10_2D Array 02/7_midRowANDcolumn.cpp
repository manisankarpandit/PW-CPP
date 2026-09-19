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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2 || j == m / 2)
            {
                cout << arr[i][j] << " ";
            }
            else
                cout << " " << " ";
        }
        cout << endl;
    }
}
