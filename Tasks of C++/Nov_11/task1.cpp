#include<iostream>
using namespace std;
class addition
{
int num1, num2;
public: int calculate()
{
cout<< "Enter 2 integers \n";
cin>>num1>>num2;
return (num1+num2);
}
};
int main()
{
int r;
    addition obj1;
    r=obj1.calculate();
    cout<<"Sum of 2 integers\n"<<r;
    return 0;
}