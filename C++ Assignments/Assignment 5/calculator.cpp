#include<iostream>
using namespace std;
class calculator
{
int a, b, choice;
public: void display() 
{
cout<<"Enter 2 numbers and choice..1 for addition ,2.subtraction ,3.multiplication,4.division,5.modulo division\n";
cin>>a>>b>>choice;
switch(choice) 
{
case 1 : cout<<"Addition is performed\n"<<a+b;break;
case 2 : cout<<"Subtraction is performed\n"<<a-b;break;
case 3 : cout<<"Multiplication is performed\n"<<a*b;break;
case 4 : cout<<"Division is performed\n"<<a/b;break;
case 5 : cout<<"Modulo division is performed\n"<<a%b;break;
default  : cout<<"Check the choices :(";break;
}
}
};

int main()
{   
calculator obj1;
obj1.display();
return 0;
}