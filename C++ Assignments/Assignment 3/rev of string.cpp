#include<iostream>
#include<string>
using namespace std;
class rev
{
int length;
char str[20];
public: void display() 
{
cout<<"Enter string\n";
cin>>str;
length=strlen(str) ;
for(int i=length-1;i>=0;i--) 
{
cout<<str[i];
}
}
};

int main()
{   
rev obj1;
obj1.display();
return 0;
}