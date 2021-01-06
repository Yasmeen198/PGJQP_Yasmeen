#include<iostream>
using namespace std;
int main()
{
int x, y, *p=&x, *p1=&y;
cout<<"Enter 2 values\n";
cin>>x>>y;
cout<<"Sum of 2 values using pointers is:"<<*p+*p1;
return 0;
}