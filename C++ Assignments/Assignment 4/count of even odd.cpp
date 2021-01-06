#include<iostream>
using namespace std;
class odd_even
{
int a[12],n,count1=0,count2=0;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array 'a' elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Odd and even numbers in an array are:\n";
for(int i=0;i<n;i++)
{
if(a[i]%2!=0)
{
count1++;
}
else
count2++;
}
cout<<count1<<"\n"<<count2;
}
};

int main()
{   
odd_even obj1;
obj1.find();
return 0;
}