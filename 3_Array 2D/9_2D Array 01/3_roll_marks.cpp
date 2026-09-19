#include <iostream>
using namespace std;
int main()
{

    int arr[2][4];
    for (int i = 0; i < 2; i++)
    { // i for rows
        for (int j = 0; j < 4; j++)
        { // j  for columns
            cin >> arr[i][j];
        }
    }
    // print
    for (int i = 0; i < 2; i++)
    { // i for rows
        for (int j = 0; j < 4; j++)
        { // j  for columns
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}