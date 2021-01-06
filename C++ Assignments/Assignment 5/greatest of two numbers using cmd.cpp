#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int c1,c2;
c1=atoi(argv[1]);
c2=atoi(argv[2]);
if (c1 > c2)
{
cout<<"Greatest of two numbers is "<<c1;
}
else
cout<<"Greatest of two numbers is "<<c2;
return 0;
}
