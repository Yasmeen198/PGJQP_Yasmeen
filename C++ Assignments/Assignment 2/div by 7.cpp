#include<iostream>
using namespace std;
class Divisibility
{
int num;
public: void check() 
{
cout<<"Enter a number \n";
cin>>num;
if((num%7==0) ) 
{
cout<<"Divisible by 7\n";
}
else
{
cout<<"Not divisible by 7\n";
}
}
};

int main()
{   
Divisibility obj1;
obj1.check();
return 0;
}