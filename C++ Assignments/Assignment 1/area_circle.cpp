#include<iostream>
#include<cmath>
using namespace std;
class circle
{
float r,a;
public: void calculate() 
{
cout<<"Enter radius of circle\n";
cin>>r;
a=M_PI*r*r;
cout<<"Area of circle is:\n"<<a;
}
};

int main()
{  
circle obj1;
obj1.calculate();
return 0;
}