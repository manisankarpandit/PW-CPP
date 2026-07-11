#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Ennter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array :";
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search :";
    cin>>x;
    //search
    bool flag = false; // false means elemrnt is not present
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"Element found";
    else cout<<"Element not found";
}