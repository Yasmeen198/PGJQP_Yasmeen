#include<iostream>
using namespace std;
class swAp
{
int num1, num2, m, n;
public: void display() 
{
cout<<"Enter 2 numbers \n";
cin>>num1>>num2;
m=num1;
num1=num2;
num2=m;
cout<<"Swapped integers num1, num2 are\n"<<num1<<"\n"<<num2;
}
};

int main()
{   
swAp obj1;
obj1.display();
return 0;
}