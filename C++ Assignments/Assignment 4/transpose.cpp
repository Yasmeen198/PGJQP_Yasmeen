#include<iostream>
using namespace std;
class transpose
{
int a[6][6],c[6][6],n;
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
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
c[i][j]=a[j][i];
}
}
cout<<"Transpose of matrix is\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
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