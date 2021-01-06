#include<iostream>
using namespace std;
class Least
{
int num1,num2,num3;
public: void display() 
{
cout<<"Enter 3 numbers \n";
cin>>num1>>num2>>num3;
if((num1<num2)&&(num1<num3)) 
{
cout<<"Least number is\n"<<num1;
}
else if((num2<num1)&&(num2<num3) ) 
{
cout<<"least number is\n"<<num2;
}
else
{
cout<<"least number is\n"<<num3;
}
}
};

int main()
{   
Least obj1;
obj1.display();
return 0;
}