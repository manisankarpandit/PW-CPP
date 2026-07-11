#include<iostream>
#include<vector>
using namespace std;
void moveNegativesToFront(vector<int>& v) {
    int j = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0) {
            if (i != j) {
                swap(v[i], v[j]);
            }
            j++;
        }
    }
}
int main()
{
    vector<int>v;
   v.push_back(-1);
    v.push_back(0);
    v.push_back(-2);
    v.push_back(1);
    v.push_back(-3);
    moveNegativesToFront(v);
    cout<<"sorted array are :";
    for(int i = 0;i<v.size();i++)
    cout<<v[i]<<" ";
}