#include<iostream>
using namespace std;
class Great
{
int num1,num2;
public: void display() 
{
cout<<"Enter numbers \n";
cin>>num1>>num2;
if(num1>num2) 
{
cout<<"Greater number is\n"<<num1;
}
else
cout<<"Greater number is\n"<<num2;
}
};

int main()
{   
Great obj1;
obj1.display();
return 0;
}