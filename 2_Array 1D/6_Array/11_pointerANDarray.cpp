#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,2,7,9,8};
    int *ptr = arr;
    cout<<ptr<<endl;
    for(int i= 0;i<=4; i++)
    {
        cout<<ptr[i]<<" ";
        // cout<<arr[i]<<endl;
    }
}
