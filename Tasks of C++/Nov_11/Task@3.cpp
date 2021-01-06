#include<iostream>
using namespace std;
class Employee
{
int e_id;
float salary;
char name[20];
public: void accept() 
{
cout<<"Enter employee ID and name \n";
cin>>e_id>>name;
}
void display() 
{
cout<<"Employee id:"<<e_id<<"\nEmployee name:"<<name;
cout<<"\nYour current salary is:\n"<<"Rs.40000\n";
}
};

int main()
{   
Employee obj1;
obj1.accept();
obj1. display() ;
Employee obj2;
obj1. accept() ;
obj1. display () ;
return 0;
}