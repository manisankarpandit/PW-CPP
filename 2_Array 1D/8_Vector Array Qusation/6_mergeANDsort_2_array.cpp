#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&v,vector<int>&w){
   int n = v.size();
   int m = w.size();
   vector<int>res;
   int i = 0;
   int j = 0;
   int k = 0;
   while(i<n && j<m){
       if(v[i]<w[j]){
           res[k]=v[i];
           i++;
           k++;
       }
        if(v[i]>w[j]){
           res[k]=w[j];
           j++;
           k++;
       }
   }
   if(i==n){
       while(j<m-1){
           res[k]=w[j];
           k++;
           j++;
       }
   }
   if(j==m){
       while(i<n-1){
           res[k]=v[i];
           k++;
           i++;
       }
   }
   return res;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of 1st array :";
    cin>>n;
    cout<<"Enter the element of 1st array :";
    for(int i = 0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    vector<int>w;
    int m;
    cout<<"Enter the size of 2nd array :";
    cin>>m;
    cout<<"Enter the element of 2nd array :";
    for(int i = 0;i<m;i++){
        int q;
        cin>>q;
        w.push_back(q);
    }
    for(int i = 0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
    for(int i = 0;i<m;i++)
    cout<<w[i]<<" ";
    cout<<endl;
    merge(v,w);
    cout<<"sorted array is :";

}