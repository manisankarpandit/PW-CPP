#include<iostream>
using namespace std;
int sum(int x,int y)
{
    int sum;
    sum = x+y;
    return sum;
}
int main()
{
    int x,y;
    int *p1 = &x;
    int *p2 = &y;
    cout<<"Enter the 1st num :";
    cin>>x;
    cout<<"Enter the 2nd num :";
    cin>>y;
    cout<<sum(*p1,*p2);
}