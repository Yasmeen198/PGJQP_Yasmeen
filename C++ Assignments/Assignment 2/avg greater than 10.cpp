#include<iostream>
using namespace std;
class average
{
int a,b,c,d,e;
float s;
public: void check() 
{
cout<<"Enter 5 integers\n";
cin>>a>>b>>c>>d>>e;
s=(a+b+c+d+e)/5;
cout<<"Average is:\n"<<s;
if(s>10) 
cout<<"\ngreater than 10:\n";
else
cout<<"not greater than 10";
}
};
int main()
{   
average obj1;
obj1.check();
return 0;
}