#include<iostream>
using namespace std;
class even_odd
{
int n;
public: void display() 
{
cout<<"Enter integer \n";
cin>>n;
if(n%2==0) 
{
cout<<"Even\n";
}
else
cout<<"Odd\n";
}
};

int main()
{   
even_odd obj1;
obj1.display();
return 0;
}