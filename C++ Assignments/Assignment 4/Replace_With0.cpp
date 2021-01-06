#include<iostream>
using namespace std;
class Replace_With0
{
int a[20],n,count1=0,count2=0,count3=0;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]<0) 
a[i]=0;
}
cout<<"Replacing negative values with zero"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i];
}
};

int main()
{
Replace_With0 obj1;
obj1.find();
return 0;
}