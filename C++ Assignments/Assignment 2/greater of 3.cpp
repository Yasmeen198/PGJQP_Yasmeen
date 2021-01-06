#include<iostream>
using namespace std;
class Great
{
int num1,num2,num3;
public: void display() 
{
cout<<"Enter 3 numbers \n";
cin>>num1>>num2>>num3;
if((num1>num2)&&(num1>num3)) 
{
cout<<"Greater number is\n"<<num1;
}
else if((num2>num1)&&(num2>num3) ) 
{
cout<<"Greater number is\n"<<num2;
}
else
{
cout<<"Greater number is\n"<<num3;
}
}
};

int main()
{   
Great obj1;
obj1.display();
return 0;
}