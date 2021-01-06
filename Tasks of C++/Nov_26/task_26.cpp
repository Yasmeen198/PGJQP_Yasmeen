#include<iostream>
#include<string.h>
using namespace std;
int id;
class Employee
{
public:
int sal,bonus, total_sal ;
char name[100],location[100],lang[100];
void accept();
int calc() ;
void display () ;
};
int Employee::calc()
{
if(id==123)
{
bonus=(10*sal)/100;
total_sal=sal+bonus;
cout<<"\nAdded a bonus of 10 percent on your salary\n";
return total_sal;
}
else
{
bonus=(20*sal)/100;
total_sal=sal+bonus;
cout<<"\nAdded a bonus of 20 percent on your salary\n";
return total_sal;
}
}
void Employee::display() 
{
cout<<"Employee_id\n"<<id;
cout<<"\nEmployee_name\n"<<(name);
cout<<"\nEmployee_location\n"<<(location);
cout<<"\nEmployee_salary\n"<<(total_sal);
}
void Employee::accept() 
{
cout<<"Enter your id\n";cin>>id;
cout<<"Enter your name\n";
cin>>name;
cout<<"Enter your location\n";
cin>>location;
cout<<"Enter salary\n";
cin>>sal;
}
class programmer: public Employee
{
public:
programmer() {
cout<<"\nHi! Programmer,Enter your details to know your total salary\n";}
};
class Hr : public Employee
{
public:
Hr() {
cout<<"Hi! HR,Enter your details to know your total salary\n";}
};
int main() 
{
Hr obj;
obj. accept() ;
obj. calc() ;
obj. display(); 
programmer obj1;
obj. accept() ;
obj. calc() ;
obj. display();
return 0;
}