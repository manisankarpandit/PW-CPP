#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j, vector<int>&v)
{
    while(i<=j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
   }
   return;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter array size :";
    cin>>n;
    cout<<"Enter array element : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    // int i,j;
    // // cout<<"Enter i :";
    // // cin>>i;
    // // cout<<"Enter j:";
    // // cin>>j;
    int k;
    cout<<"Enter the k :";
    cin>>k;
    if(k>n) k = k % n;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}
