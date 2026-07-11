 #include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    vector<int>v1;
    int n;
    cout<<"Enter array size :";
    cin>>n;
    cout<<"Enter array element : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q; 
        v1.push_back(q);
    }
    display(v1);
    cout<<" is Oroginal array "<<endl;

    vector<int>v2(v1.size());
    for(int i=0;i<v2.size();i++){
         //   i + j = size - 1
        int j = v1.size() - 1 -i;
        v2[i] = v1[j];
    }
    display(v2);
    cout<<" is reverse array "<<endl;
}
