#include<iostream>
using namespace std;
class sum
{
int a[20],n,sum=0;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"sum of all elements is:\n"<<sum;
}
};

int main()
{   
sum obj1;
obj1.find();
return 0;
}