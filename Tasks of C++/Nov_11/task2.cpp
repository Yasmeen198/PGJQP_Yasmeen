#include<iostream>
using namespace std;
class decide
{
public: int greater(int num1, int num2)
{
cout<< "Enter 2 integers \n";
cin>>num1>>num2;
if (num1>num2) 
return (num1) ;
else
return (num2) ;
}
};
int main()
{
int r, num1, num2;
    decide obj1;
    r=obj1.greater(6,6);
    cout<<"Greater of 2 integers is\n"<<r;
    return 0;
}