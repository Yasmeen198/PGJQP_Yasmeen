#include<iostream>
using namespace std;
class Equality
{
int num1, num2;
public: void display() 
{
cout<<"Enter 2 numbers \n";
cin>>num1>>num2;
if(num1==num2) 
{
cout<<"Both are equal\n";
}
else
{
cout<<"Not equal\n";
}
}
};

int main()
{   
Equality obj1;
obj1.display();
return 0;
}