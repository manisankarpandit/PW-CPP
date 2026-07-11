#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Enter the marks :"<<endl;
    cin>>A>>B>>C;
    if(A<B && A<C)
    {
        cout<<A<<" "<<"is least marks (A)";
    }
    else if(B<A && B<C)
    {
        cout<<B<<" "<<"is least marks (B)";
    }
    else{
        cout<<C<<" "<<"is least marks (C)";
    }
}