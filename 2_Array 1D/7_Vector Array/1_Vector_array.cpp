#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;//you need not mention size
    //inserting / input do not use []

    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(10);
    cout<<v.size()<<endl;
    cout<<endl;
    // if you want update / access you can use []
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;


}