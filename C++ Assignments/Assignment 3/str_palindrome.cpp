#include<iostream>
#include<string>
using namespace std;
class rev
{
int length=0,flag=0,i;
char str[20],rev[20];
public: void display() 
{
cout<<"Enter string\n";
cin>>str;
for(i=0;str[i]!='\0';i++)
{
length++;
}
for(i=length-1;i>=0;i--) 
{
rev[length-i-1]=str[i];
}
for(i=0;i<length;i++)
{
if(rev[i]!=str[i])
{
flag=1;
}
}
if(flag==1) 
cout<<"\nNot Palindrome";
else
cout<<"\nPalindrome ";
}
};

int main()
{   
rev obj1;
obj1.display();
return 0;
}