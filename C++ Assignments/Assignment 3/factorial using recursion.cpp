#include<iostream>
using namespace std;
int f(int n)
{
if (n<=1) 
return 1;
else
return n*f(n-1) ;
}
int main()
{
int num,result=1;
cout<<"enter a number to find factorial\n";
cin>>num;
 cout<<"factorial is\n"<<f(num);
    return 0;
}