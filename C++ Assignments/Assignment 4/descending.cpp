#include<iostream>
using namespace std;
class Array
{
int a[20],n,temp;
public: void sort() 
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
for(int j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"Sorted in descending.. \n";
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
};

int main()
{   
Array obj1;
obj1.sort();
return 0;
}