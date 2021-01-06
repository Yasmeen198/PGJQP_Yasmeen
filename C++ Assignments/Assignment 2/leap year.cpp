#include<iostream>
using namespace std;
class Leapyear
{
int year;
public: void check() 
{
cout<<"Enter year \n";
cin>>year;
if(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)) 
{
cout<<"Leap year\n";
}
else
{
cout<<"Not leap year\n";
}
}
};

int main()
{   
Leapyear obj1;
obj1.check();
return 0;
}