#include<iostream>
using namespace std;
int main()
{
int num, rem,count=0;
cout<<"enter a number to find no. of digits\n";
cin>>num;
 while(num != 0) 
{
rem=num%10;
count++;
num=num/10;
}
 cout<<"no. of  digits\n"<<count;
    return 0;
}