#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout<<"Enter the num :";
    cin>>n;
    bool flag = true;
    for(i=2;i<=n-1;i++)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    if(n==1)
    cout<<"1 nor prime nither composite";
    else if(flag == true)
    cout<<n<<" "<<"is prime";
    else
    cout<<n<<" "<<"is composite";
}