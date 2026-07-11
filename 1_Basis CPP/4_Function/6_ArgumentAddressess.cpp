#include<iostream>
using namespace std;
void fun(int a,int b)
{
     cout<<"Enter of fun :"<<&a<<endl;
    cout<<"Enter of fun :"<<&b<<endl;
}
int main()
{
    int x = 2;
    int b = 3;
    cout<<"Enter of main :"<<&x<<endl;
    cout<<"Enter of main :"<<&b<<endl;
    fun(x,b);
}