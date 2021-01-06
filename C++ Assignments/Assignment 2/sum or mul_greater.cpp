#include<iostream>
using namespace std;
class Greater
{
int num1, num2, s, m;
public: void check() 
{
cout<<"Enter 2 integers\n";
cin>>num1>>num2;
s=num1+num2;
cout<<"Sum is:\n"<<s;
m=num1*num2;
cout<<"\nMutliplied result is:\n"<<m;
if(s>m) 
cout<<"\nSum is greater \n"<<s;
else
cout<<"\nMultiplied result is greater\n"<<m;
}
};
int main()
{   
Greater obj1;
obj1.check();
return 0;
}