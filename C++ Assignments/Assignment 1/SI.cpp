#include<iostream>
#include<cmath>
using namespace std;
class simpleInterest
{
int p, t, r;
float s;
public: void calculate() 
{
cout<<"Enter principal, time, rate of interest\n";
cin>>p>>t>>r;
s=(p*t*r)/100;
cout<<"Simple Interest is:\n"<<s;
}
};

int main()
{   
simpleInterest obj1;
obj1.calculate();
return 0;
}