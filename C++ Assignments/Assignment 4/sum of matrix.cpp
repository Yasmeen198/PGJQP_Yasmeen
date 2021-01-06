#include<iostream>
using namespace std;
class sum
{
int a[6][6],b[6][6],c[6][6],n;
public: void find() 
{
cout<<"enter matrix size\n";
cin>>n;
cout<<"Enter matrix 'a' elements\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter matrix 'b' elements\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>b[i][j];
}
}
cout<<"sum of matrices:\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
cout<<c[i][j]<<"\t";
}
cout<<endl;
}
}
};

int main()
{   
sum obj1;
obj1.find();
return 0;
}