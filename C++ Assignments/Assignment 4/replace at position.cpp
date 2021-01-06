#include<iostream>
using namespace std;
class search_key
{
int a[10],n,key, pos;
public: void find() 
{
cout<<"enter array size\n";
cin>>n;
cout<<"enter element with which you want to replace\n";
cin>>key;
cout<<"enter position where you want to replace\n";
cin>>pos;
cout<<"Enter array 'a' elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Elements after replacing\n";
for(int i=0;i<n;i++)
{
a[pos-1]=key;
cout<<a[i]<<endl;
}
}
};

int main()
{   
search_key obj1;
obj1.find();
return 0;
}