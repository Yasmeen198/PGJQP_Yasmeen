#include<iostream>
using namespace std;
class Divisibility
{
int num;
public: void check() 
{
cout<<"Enter a number \n";
cin>>num;
if((num%9==0) ) 
{
cout<<"Divisible by 9\n";
}
else
{
cout<<"Not divisible by 9\n";
}
}
};

int main()
{   
Divisibility obj1;
obj1.check();
return 0;
}