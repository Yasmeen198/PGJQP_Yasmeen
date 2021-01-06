#include<iostream>
using namespace std;
int main()
{
int m, num, rem,sum=0;
cout<<"enter a number to find whether Armstrong or not\n";
cin>>num;
m=num;
 while(num != 0) 
{
rem=num%10;
sum=sum+rem*rem*rem;
num=num/10;
}
if(sum==m) 
 cout<<"Armstrong\n";
else
cout<<"not";
    return 0;
}