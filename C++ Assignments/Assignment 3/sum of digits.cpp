#include<iostream>
using namespace std;
int main()
{
int num, rem,sum=0;
cout<<"enter a number to find sum of digits\n";
cin>>num;
 while(num != 0) 
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
 cout<<"sum of  digits\n"<<sum;
    return 0;
}