#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>v(5); // it means array size is 5
    // cout<<v[2];// by default is output always 0

    vector<int>v(5,7); //v(5,7) means intilization size 5 and each element has value is 7
    // cout<<v[4];
    for(int i= 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}