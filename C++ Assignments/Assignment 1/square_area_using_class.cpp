#include<iostream>
using namespace std;
class square
{
int a, r;
public: void area_square() 
{
cout<<"Enter side of square\n";
cin>>a;
r=a*a;
cout<<"Area of square:\n"<<r;
}
};

int main()
{   
square obj1;
obj1.area_square();
return 0;
}