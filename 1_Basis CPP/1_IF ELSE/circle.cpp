#include<iostream>
using namespace std;
int main()
{
    float a,area,perimeter;
    cout<<"Enter the radius"<<endl;
    cin>>a;
    area = 3.14*a*a;
    cout<<"Area of the circle is "<< area <<endl;
    perimeter = 2*3.14*4;
    cout<<"Perimeter of the circle is "<<perimeter<<endl;
    if(area>perimeter){
        cout<<"Area is greater than perimeter"<<endl;
    }
    else{
         cout<<"perimeter is greater than area"<<endl;
    }
}