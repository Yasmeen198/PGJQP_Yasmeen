#include<iostream>
using namespace std;
class Inc
{
private:
int y;
public:
void set(int x) ;
int get() ;
};
void Inc::set(int x)
{
y=x;
}
int Inc::get() 
{
y++;
cout<<"Hiding the value (using specifiers) and varying value\n"<<y;
}
int main()
{
Inc i;
i.set(21);
i. get();
}