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
     int max = arr[0];
    // int max = INT_MIN;
    for(int i=1;i<=n-1;i++)
    {
       if(max<arr[i]) max = arr[i];
    }

    int smax = arr[0];
    // int max = INT_MIN;
    for(int i=1;i<=n-1;i++)
    {
       if(smax<arr[i] && arr[i]!= max) smax = arr[i];
    }
    cout<<"Maxiam element is "<<max<<endl;
     cout<<"2nd Maxiam element is "<<smax;
    
}