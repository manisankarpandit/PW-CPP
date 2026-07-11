#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num :";
    cin>> n;
    int last_digits = 0;
    int sum = 0;
    while(n>0)
    {
        last_digits += n%10;
        sum += last_digits;
        n/= 10;
    }
    cout<<sum;
}