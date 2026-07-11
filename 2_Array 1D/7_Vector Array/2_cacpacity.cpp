#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;  // size  capacity
    v.push_back(6);//    1        1
    v.push_back(1);//    2        2    
    v.push_back(9);//    3        4
    v.push_back(10);//   4        4
     v.push_back(6);//   5        8
    v.push_back(1);//    6        8
    v.push_back(9);//    7        8
    v.push_back(10);//   8        8
     v.push_back(6);//   9        16
    v.push_back(1);//    .        .
    v.push_back(9);//    .        .
    v.push_back(10);//   .        .
     v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
     v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);//  20       32

    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
     v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
     v.pop_back();
    v.pop_back();

     cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
}