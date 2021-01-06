#include<iostream>
using namespace std;
class odd
{
int a[12],n;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array 'a' elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Odd numbers in array are:\n";
for(int i=0;i<n;i++)
{
if(a[i]%2!=0) 
cout<<a[i]<<"\n";
}
}
};

int main()
{   
odd obj1;
obj1.find();
return 0;
}