#include<iostream>
using namespace std;
class UpperLower
{
char ch;
public: void check() 
{
cout<<"Enter a character\n";
cin>>ch;
if(ch>=65&&ch<=90) 
{
cout<<"Uppercase\n";
}
else
{
cout<<"Lowercase\n";
}
}
};

int main()
{   
UpperLower obj1;
obj1.check();
return 0;
}