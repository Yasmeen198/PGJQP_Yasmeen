#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   float x1, x2, real, imag,dis,a,b,c,d;
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d>0) 
{
x1=(-b+sqrt(d) )/2*a;
x2=(-b-sqrt(d) )/2*a;
cout<<"x1=\n"<<x1<<"x2=\n"<<x2;
}
else if(d=0) 
{
x1=-b/2*a;
cout<<"x1=x2=\n"<<x1;
}
else
{
real=-b/2*a;
imag=sqrt(-d)/2*a;
cout<<"x1=\n"<<real<<"+"<<imag<<"i"<<endl;
cout<<"x2=\n"<<real<<"-"<<imag<<"i"<<endl;
}
return 0;
}