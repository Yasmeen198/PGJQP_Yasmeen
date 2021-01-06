#include<iostream>
using namespace std;
class mul
{
int a[10],n;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array 'a' elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Displaying as multiples of 2\n";
for(int i=0;i<n;i++)
{
cout<<a[n-i-1]<<"\n";
}
}
};

int main()
{   
mul obj1;
obj1.find();
return 0;
}