#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the point "<<endl;
    cin>>a>>b;
    if(a>0 && b==0)
    {
        cout<<"The point are lies on the X - axis";
    }
    else if(a==0 && b>0)

   {
        cout<<"THe point are lie on the Y -axis";
    }
    else if (a==0 && b==0)
    {
         cout<<"THe point are lie on the origin";
    }
    else{
        cout<<"Point are not lies x-axis , Y-axis and origin";
    }

}