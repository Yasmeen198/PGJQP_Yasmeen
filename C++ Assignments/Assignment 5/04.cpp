#include<iostream>
using namespace std;
int mean;
class average
{
int num[5],sum=0;
public : int find();
};
int average::find()  
{
cout<<"Enter 5 integers\n";
for(int i=0;i<5;i++)
{
cin>>num[i];
sum=sum+num[i];
mean=sum/5;
}
return mean;
}
int main()
{
int result;
average obj1;
result=obj1.find();
cout<<"result is\n"<<result;
if(mean>100) 
cout<<"\nAverage is greater than 100";
else
cout<<"not greater than 100";
return 0;
}