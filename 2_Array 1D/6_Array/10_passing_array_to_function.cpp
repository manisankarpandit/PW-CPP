#include<iostream>
using namespace std;
void display(int a[])
{  
   //  int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<7;i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;
   return;
}
void change (int b[]){                      //Problem
   b[0]=100;
   
}
int main()
{
   int arr[]={5,3,6,9,8,7,1};
   display(arr);
   change(arr);
   display(arr);
}
