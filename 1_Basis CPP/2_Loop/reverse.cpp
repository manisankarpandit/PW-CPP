#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num :";
    cin>> n;
    int last_digits = 0;
    int reverse = 0;
    while(n>0)
    {   
        reverse *= 10;
        last_digits = n%10;
       reverse += last_digits;
        n/= 10;
    }
    cout<<reverse;
}