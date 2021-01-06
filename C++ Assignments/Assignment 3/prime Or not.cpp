#include<iostream>
using namespace std;
class prime
{
int n, count=0;
public: void display() 
{
cout<<"Enter integer \n";
cin>>n;
for(int i=2;i<n;i++) 
{
if(n%i==0) 
{
count++;break;
}
}
if(count>0) 
cout<<"Not prime\n";
else
cout<<"Prime\n";
}
};

int main()
{   
prime obj1;
obj1.display();
return 0;
}