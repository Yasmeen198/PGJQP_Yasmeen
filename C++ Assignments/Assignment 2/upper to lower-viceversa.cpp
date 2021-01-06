#include<iostream>
using namespace std;
class Ascii
{
char ch;
public: void conversion() 
{
cout<<"Enter character \n";
cin>>ch;
if((ch>=65)&&(ch<=90))
{
ch=ch+32;
cout<<"lower case is\n"<<ch;
}
else if((ch>=97)&&(ch<122))
{
ch=ch-32;
cout<<"upper case is\n"<<ch;
}
}
};

int main()
{   
Ascii obj1;
obj1.conversion();
return 0;
}