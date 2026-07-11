#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int *ptr = &x;
    int **p = &ptr;
    cout<<x<<endl;    //output 5
    cout<<*ptr<<endl;//output 5
    cout<<**p<<endl;//output 5

    cout<<x<<endl;    //5
    cout<<&ptr<<endl;//0x61ff08
    cout<<&p<<endl;//0x61ff04
    
    cout<<x<<endl;    //5
    cout<<ptr<<endl;//0x61ff0c
    cout<<p<<endl;//0x61ff08
}