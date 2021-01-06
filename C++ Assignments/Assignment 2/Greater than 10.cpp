#include<iostream>
using namespace std;
class Great
{
int num;
public: void display() 
{
cout<<"Enter number \n";
cin>>num;
if(num>10) 
{
cout<<"Greater than 10\n";
}
else
cout<<"Not greater than 10\n";
}
};

int main()
{   
Great obj1;
obj1.display();
return 0;
}