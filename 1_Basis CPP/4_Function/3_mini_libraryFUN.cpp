#include<iostream>
using namespace std;
int mini(int x, int y)
{  
    if(x<y) return x;
    else  return y;
}
int main()
{   
    int x,y;
    cin>>x>>y;
    cout<<mini(x,y);
}