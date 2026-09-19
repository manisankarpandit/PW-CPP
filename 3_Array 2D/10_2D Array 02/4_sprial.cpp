#include <iostream>
#include <vector>
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
    cout << endl;
    // int tne = n*m;
    // int count = 0;
    //     // sprial
    //     int minr = 0, maxr  = m-1;
    //     int minc = 0, maxc = n-1;
    //     while(minr<=maxr && minc<=maxc){
    //     // right row constant
    //     for(int i = minc;i<=maxc && count<tne;i++){
    //         cout<<arr[minr][i]<<" ";
    //         count++;
    //     }
    //     minr++;
    //     // down - column constant
    //     for(int i = minr;i<=maxr && count<tne;i++){
    //         cout<<arr[i][maxc]<<" ";
    //         count++;
    //     }
    //     maxc--;
    //     //left - row constant
    //     for(int j = maxc;j>=minc && count<tne;j--){
    //         cout<<arr[maxr][j]<<" ";
    //         count++;
    //     }
    //     maxr--;
    //     //top - column constant
    //     for(int j = maxr;j>=minr && count<tne;j--){
    //         cout<<arr[j][minc]<<" ";
    //         count++;
    //     }
    //     minc++;
    //     }
    // }
    // above or below - same dono
    // sprial
    int minr = 0, maxr = m - 1;
    int minc = 0, maxc = n - 1;
    while (minr <= maxr && minc <= maxc)
    {
        // right row constant
        for (int i = minc; i <= maxc; i++)
        {
            cout << arr[minr][i] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        // down - column constant
        for (int i = minr; i <= maxr; i++)
        {
            cout << arr[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        // left - row constant
        for (int j = maxc; j >= minc; j--)
        {
            cout << arr[maxr][j] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;
        // top - column constant
        for (int j = maxr; j >= minr; j--)
        {
            cout << arr[j][minc] << " ";
        }
        minc++;
        if (minr > maxr || minc > maxc)
            break;
    }
}
