#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int n = v.size();
    int no1 = 0;
    int no0 = 0;
    for(int i= 0;i<n;i++){
        if(v[i]== 0) no0++;
        else no1++;
    }
    // filling element
    for(int i=0;i<n;i++){
        if(i<no0) v[i]=0;
        else v[i]=1;
    }
}
int main()
    {
        vector<int>v;
        int n;
        cout<<"Enter the size of array :";
        cin>>n;
        cout<<"Enter the element of array :";
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        sort01(v);
        for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    }
