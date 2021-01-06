#include<iostream>
using namespace std;
class search_key
{
int a[10],n,key;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"enter key element\n";
cin>>key;
cout<<"Enter array 'a' elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Element was present at position\n";
for(int i=0;i<n;i++)
{
if(a[i]==key)
{
cout<<i+1;
break;
}
}
}
};

int main()
{   
search_key obj1;
obj1.find();
return 0;
}