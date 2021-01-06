#include<iostream>
using namespace std;
class count_elements
{
int a[20],n,count=0;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"Enter array elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
count++;
}
cout<<"total no. of elements is:\n"<<count;
}
};

int main()
{   
count_elements obj1;
obj1.find();
return 0;
}