#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(v[i]==0) i++;
        else if (v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            // int temp = v[i];
            // v[i]=v[j];
            // v[j]=temp;
            i++;
            j--;
        }
    }
    // return;

}
int main()
{
    vector<int>v;
    int x;
    cout<<"Enter the size of array :";
    cin>>x;
    cout<<"Enter the element of array :";
    for(int i = 0;i<x;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    sort01(v);
    for(int i=0;i<x;i++)
    cout<<v[i]<<" ";
}