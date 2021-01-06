#include<iostream>
using namespace std;
class second_largest
{
int a[10],n,largest, second;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array 'a' elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
if(a[0]<a[1]) 
{
largest=a[1];
second=a[0];
}
else
{
largest=a[0];
second=a[1];
}
for(int i=2;i<n;i++)
{
if(a[i]>largest)
{
second=largest;
largest=a[i];
}
else if (a[i] > second && a[i] != largest) 
{ 
second = a[i]; 
} 
}
cout<<"Second Largest Element in array is: "<<second; 
}
};

int main()
{   
second_largest obj1;
obj1.find();
return 0;
}
