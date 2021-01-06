#include<iostream>
using namespace std;
class even_odd
{
char ch;
public: void display() 
{
cout<<"Enter character \n";
cin>>ch;
cout<<"Ascii value:\n",(int)ch;
}
};

int main()
{   
Ascii obj1;
obj1.display();
return 0;
}