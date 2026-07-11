#include<iostream>
#include<vector>
using namespace std;
int main()
{
//     vector<int>v(5);
//     for(int i=0; i<5;i++)
//     {
//         // int x;
//         cin>>v[i];
//         // v.push_back(x);
//     }
//    for(int i=0; i<5;i++)
//     {
//        cout<<v[i]<<" ";
//     }
    vector<int>v;
    int n;
    // cin>>n;
    cout<<"Enter the number you want :";
    cin>>n;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }                                                 
   for(int i=0; i<n;i++)
    {
       cout<<v[i]<<" ";
    }

}