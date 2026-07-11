#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout << "ENter the size of array :" << endl;
    cin >> n;
    int num[n];
    cout << "Enter the numbers of array :" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        sum += num[i];
        // cout<<sum;
    }
    cout << sum;
}