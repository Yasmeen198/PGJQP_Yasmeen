#include<iostream>
using namespace std;
class count_elements
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
if(a[i]>0)
count1++;
else if(a[i]<0) 
count2++;
else
count3++;
}
cout<<"\ntotal no. of positive elements is:\n"<<count1;
cout<<"\ntotal no. of negative elements is:\n"<<count2;
cout<<"\ntotal no. of zeroes is:\n"<<count3;
}
};

int main()
{   
count_elements obj1;
obj1.find();
return 0;
}