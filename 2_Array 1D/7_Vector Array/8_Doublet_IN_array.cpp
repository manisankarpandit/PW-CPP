#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int x;
    cout<<"Enter target : ";
    cin>>x;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter array element : "<<endl;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);                             //doubt
    }
    // for(int i=0;i<=v.size()-2;i++){
    //     for(int j=i+1;j<=v.size()-1;j++){
    //         if(v[i]+v[j]==x){
    //             cout<<"("<<i<<","<<j<<")"<<endl;
    //         }
    //     }
    // }
     for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
     }
}