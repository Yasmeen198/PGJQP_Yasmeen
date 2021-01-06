#include<iostream>
using namespace std;
class VowCons_using_switch
{
char ch;
public: void check() 
{
cout<<"Enter a character\n";
cin>>ch;
switch(ch)
{
case 'a' : cout<<"vowel";break;
case 'e' : cout<<"vowel";break;
case 'i' : cout<<"vowel";break;
case 'o' : cout<<"vowel";break;
case 'u' : cout<<"vowel";break;
case 'A' : cout<<"vowel";break;
case 'E' : cout<<"vowel";break;
case 'I' : cout<<"vowel";break;
case 'O' : cout<<"vowel";break;
case 'U' : cout<<"vowel";break;
default  : cout<<"consonant";break;
}
}
};

int main()
{   
VowCons_using_switch obj1;
obj1.check();
return 0;
}