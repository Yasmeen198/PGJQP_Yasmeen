#include<iostream>
using namespace std;
class str_int
{
char str[20];
public : int convert();
};
int str_int::convert()  
{
cout<<"Enter string\n";
cin>>str;
return atoi(str);
}
int main()
{
int result;
str_int obj1;
result=obj1.convert();
cout<<"after conversion"<<result;
return 0;
}