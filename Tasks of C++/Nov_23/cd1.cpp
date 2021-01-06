#include<iostream>
using namespace std;
class Inc
{
public:
int c=20;
Inc()
{
c++;
cout<<"Displaying the pre-assigned value, c="<<c;
}
Inc(int x)
{
c=x*2;
cout<<"\nUsing parameterized constructor, c="<<c;
}
Inc(int x, char ch) 
{
c=x;
cout<<"\nvalue of c assigned:"<<x;
cout<<"\nascii value of c:"<<(int) ch;
}
Inc(char c, int x) 
{
cout<<"char Int";
}
~Inc() 
{
cout<<"\nI destroyed\n";
}
};
int main()
{
Inc i;
Inc i1(10);
Inc i2(2,'b');
}