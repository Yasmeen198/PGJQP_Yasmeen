#include<iostream>
using namespace std;
class addition
{
int num1, num2, s;
public: void check() 
{
cout<<"Enter 2 integers\n";
cin>>num1>>num2;
s=num1+num2;
cout<<"Sum is:\n"<<s;
if(s>100) 
cout<<"\nGreater than 100\n";
else
cout<<"Not greater than 100";
}
};
int main()
{   
addition obj1;
obj1.check();
return 0;
}