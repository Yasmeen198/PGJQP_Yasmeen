#include<iostream>
using namespace std;
class pow_base
{
int m=1;
public : int find(int base, int power);
};
int pow_base::find(int base, int power)  
{
while(power!=0) 
{
m=m*base;
--power;
}
return m;
}
int main()
{
int result;
pow_base obj1;
result=obj1.find(10,3);
cout<<"result is\n"<<result;
return 0;
}