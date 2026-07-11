#include<iostream>
// #include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of array :"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     int min = arr[0];
    // int max = INT_MAX;
    for(int i=1;i<=n-1;i++)
    {
       if(min>arr[i]) min = arr[i];
    }
    cout<<"Minimum element is "<<min;
    
}