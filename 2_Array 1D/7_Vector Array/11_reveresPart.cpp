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
    int i,j;
    cout<<"Enter i :";
    cin>>i;
    cout<<"Enter j:";
    cin>>j;
    reversepart(i,j,v);
    display(v);
}
