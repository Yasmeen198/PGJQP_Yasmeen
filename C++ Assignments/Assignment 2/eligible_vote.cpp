#include<iostream>
using namespace std;
class eligible
{
int age;
public: void display() 
{
cout<<"Enter age \n";
cin>>age;
if(age>18) 
{
cout<<"Eligible for vote\n";
}
else
cout<<"Not eligible\n";
}
};

int main()
{   
eligible obj1;
obj1.display();
return 0;
}