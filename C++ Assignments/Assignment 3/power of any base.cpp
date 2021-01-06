#include<iostream>
using namespace std;
int main()
{
int m=1,base,power;
cout<<"enter base and power\n";
cin>>base>>power;
cout<<base<<"^"<<power;
while(power!=0) 
{
m=m*base;
--power;
}
 cout<<"\n"<<"="<<m;
    return 0;
}