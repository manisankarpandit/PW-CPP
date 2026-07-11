#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter the side one by one "<<endl;
    cin>>side1;
    cin>>side2;
    cin>>side3;
    if(side1==side2 && side2==side3)
    {
        cout<<"Triangle is equilateral"<<endl;
    }
    else if(side1!=side2 && side2!=side3 && side1!=side3)
    {
        cout<<"Triangle is scalene"<<endl;
    }
    else if (side1==side2 || side2==side3 || side1==side3){
        cout<<"Triangle is isosceles"<<endl;
    }
    
}