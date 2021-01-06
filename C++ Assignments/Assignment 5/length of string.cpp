#include<iostream>
using namespace std;
class length
{
int len=0;
char str[20];
public : int find();
};
int length::find()  
{
cout<<"Enter string\n";
cin>>str;
for(int i=0;str[i]!=0;i++)
{
len++;
}
return len;
}
int main()
{
int result;
length obj1;
result=obj1.find();
cout<<"length is\n"<<result;
return 0;
}