#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1,n;
    cout<<"Enter the base :";
    cin>>a;
    cout<<"Enter the power :";
    cin>>b;
    if(b>0){
         float power=1;
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
     cout<<power;
    }
    else if(b=-b){
        float power;
   power=1.0/power;
   cout<<power;
    }
     
}