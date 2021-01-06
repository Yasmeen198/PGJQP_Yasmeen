#include<iostream>
using namespace std;
class fibonacci
{
int n,t1=0,t2=1,nextTerm;
public: void display() 
{
cout<<"Enter length of fibonacci series\n";
cin>>n;
for(int i=1;i<=n;i++) 
{
cout<<t1<<" ";
nextTerm=t1+t2;
t1=t2;
t2=nextTerm;
}
}
};

int main()
{   
fibonacci obj1;
obj1.display();
return 0;
}