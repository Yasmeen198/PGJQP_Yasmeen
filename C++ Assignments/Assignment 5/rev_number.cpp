#include<iostream>
using namespace std;
class rev_fun
{
int num, rem,sum=0;
public : void rev(int num);
};
void rev_fun::rev(int num)  
{
while(num != 0) 
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
 cout<<"Reverse of number:\n"<<sum;
}
int main()
{
rev_fun obj1;
obj1.rev(104);
return 0;
}