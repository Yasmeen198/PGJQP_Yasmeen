#include<iostream>
using namespace std;
class VowCons
{
char ch,lv, uv;
public: void check() 
{
cout<<"Enter a character\n";
cin>>ch;
lv=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
uv =(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
if(lv||uv) 
{
cout<<"Vowel\n";
}
else
{
cout<<"Consonant\n";
}
}
};

int main()
{   
VowCons obj1;
obj1.check();
return 0;
}