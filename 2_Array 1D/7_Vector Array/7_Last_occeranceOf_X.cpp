#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(9);
    int x =9;
    int idx = -1;
    for(int i=0;i<v.size();i++)
    {
        if (v[i]==x) idx = i;
    }
    cout<<idx;
}