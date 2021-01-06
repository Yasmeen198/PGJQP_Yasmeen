#include<iostream>
using namespace std;
class MultiplicationOfArrays
{
int a[2],b[2],c[3],n,m;
public: void find() 
{
cout<<"enter array 'a' size\n";
cin>>n;
cout<<"Enter array 'a' elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"enter array 'b' size\n";
cin>>m;
cout<<"Enter array 'b' elements\n";
for(int i=0;i<m;i++)
{
cin>>b[i];
}
cout<<"Multiplication of arrays\n";
for(int i=0;i<n;i++)
{
c[i]=a[i]*b[i];
cout<<c[i]<<"\n";
}
}
};

int main()
{   
MultiplicationOfArrays obj1;
obj1.find();
return 0;
}