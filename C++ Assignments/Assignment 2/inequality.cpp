#include<iostream>
using namespace std;
class InEquality
{
int num1, num2;
public: void display() 
{
cout<<"Enter 2 numbers \n";
cin>>num1>>num2;
if(num1!=num2) 
{
cout<<"Both are unequal\n";
}
else
{
cout<<"equal\n";
}
}
};

int main()
{   
InEquality obj1;
obj1.display();
return 0;
}