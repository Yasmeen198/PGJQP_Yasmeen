#include<iostream>
using namespace std;
int main()
{
int m, num, rem,sum=0;
cout<<"enter a number to find whether palindrome or not\n";
cin>>num;
m=num;
 while(num != 0) 
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
if(sum==m) 
 cout<<"palindrome\n";
else
cout<<"not";
    return 0;
}