#include<iostream>
using namespace std;
class Greater
{
public:
void Compare(int x)
{
cout<<"value of x is:"<<x;
}
void Compare(int x, int y) 
{
if(x>y) 
cout<<"\n"<<x<<" is greater";
else
cout<<"\n"<<y<<" is greater";
}
};
int main()
{
Greater i;
i.Compare(10);
i. Compare(2,33);
}