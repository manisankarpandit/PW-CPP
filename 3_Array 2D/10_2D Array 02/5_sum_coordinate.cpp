#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the rows of matrix :";
    cin>>m;
    int n;
    cout<<"Enter the columns of matrix :";
    cin>>n;
    int arr[m][n];
    for(int i = 0;i< m;i++){
        for(int j = 0;j< n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int x1,x2,y1,y2;
    cout<<"Enter the the 1st coordinate of matrix :"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the the 2nd coordinate of matrix :"<<endl;
    cin>>x2>>y2;
    int sum = 0;
    //sum
    for(int i = x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum += arr[i][j];
        }
        cout<<endl;
    }
    cout<<" sum = "<<sum;
}