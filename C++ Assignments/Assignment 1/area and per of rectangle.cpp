#include<iostream>
using namespace std;
class rectangle
{
int l,b,a,p;
public: void area_rec() 
{
cout<<"Enter length and breadth\n";
cin>>l>>b;
a=l*b;
cout<<"Area of rectangle:\n"<<a<<"\n";
}
public: void per_rec() 
{
p=2*(l+b);
cout<<"Perimeter of rectangle:\n"<<p;
}
};

int main()
{   
rectangle obj1;
obj1.area_rec();
obj1.per_rec();
return 0;
}