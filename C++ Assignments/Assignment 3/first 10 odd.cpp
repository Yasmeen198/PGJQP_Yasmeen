#include<iostream>
#include<string>
using namespace std;
class first_10_odd
{
int count=1,i,n;
public: void display() 
{
cout<<"Enter no. of odd numbers you want\n";
cin>>n;
for(i=0;i<2*n;i++)
{
if(i%2!=0)
{
count++;
cout<<i<<"\n";
}
}
}
};

int main()
{   
first_10_odd obj1;
obj1.display();
return 0;
}