#include <iostream>
using namespace std;

int main() {
    int i,n;
    cout<<"Enter the ending num :";
    unsigned long long factorial = 1;
    for (i = 1; i <= n; i++) {  
        factorial *= n;  

        cout << n << "! = " << factorial <<endl;  
    }
    return 0;
}
