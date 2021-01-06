#include<iostream>
using namespace std;
class Ascii
{
char ch;
public: void check() 
{
cout<<"Enter character \n";
cin>>ch;
if(((ch>=65)&&(ch<=90))|| ((ch>=97)&&(ch<122)))
cout<<"alphabet";
else
cout<<"not alphabet";
}
};

int main()
{   
Ascii obj1;
obj1.check();
return 0;
}