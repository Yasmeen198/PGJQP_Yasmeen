#include<iostream>
using namespace std;
class Check
{
int num;
public: void display() 
{
cout<<"Enter a number \n";
cin>>num;
if(num>0) 
{
cout<<"Number is positive\n";
}
else if(num<0) 
{
cout<<"Number is negative\n";
}
else
{
cout<<"Number is zero\n";
}
}
};

int main()
{   
Check obj1;
obj1.display();
return 0;
}