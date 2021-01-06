#include<iostream>
#include<cmath>
using namespace std;
class Average
{
int a, b, c, d, e;
float s;
public: void calculate() 
{
cout<<"Enter 5 integers\n";
cin>>a>>b>>c>>d>>e;
s=(a+b+c+d+e)/5;
cout<<"Average is:\n"<<s;
}
};
Average obj1;
int main()
{   
 obj1;
obj1.calculate();
return 0;
}