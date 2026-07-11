#include<iostream>
using namespace std;
int main()
{   
    int n1,i,j;
    cout<<"Enter the num of rows1 :";
    cin>>n1;
        for(i=1;i<=n1;i++)
        {   	
             int a=1;
            for(j=1;j<=i;j++)
            {   
                cout<<a<<" ";
                a += 2;
            }
            cout<<endl;
        }

}