#include<iostream>
#include<cmath>
using namespace std;
class area_of_polygons
{
int a, r, l, b, choice;
public: void calculate() 
{
cout<<"Enter (length, breadth)for rectangle,side of square, radius of circle and choice..1 for circle,2.rectangle,3.square\n";
cin>>l>>b>>a>>r>>choice;
switch(choice) 
{
case 1 : cout<<"Area of circle\n"<<M_PI*r*r;break;
case 2 : cout<<"Area of rectangle\n"<<l*b;break;
case 3 : cout<<"Area of square\n"<<a*a;break;
default  : cout<<"Check the choices :(";break;
}
}
};

int main()
{   
area_of_polygons obj1;
obj1.calculate();
return 0;
}