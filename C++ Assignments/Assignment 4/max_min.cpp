#include<iostream>
using namespace std;
class min_max
{
int a[20],n, max, min;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
max=a[0];
for(int i=0;i<n;i++)
{
if(a[i]>max) 
max=a[i];
}
min=a[0];
for(int i=0;i<n;i++)
{
if(a[i]<min) 
min=a[i];
}
cout<<"max is:\n"<<max;
cout<<"\nmin is:\n"<<min;
}
};

int main()
{   
min_max obj1;
obj1.find();
return 0;
}