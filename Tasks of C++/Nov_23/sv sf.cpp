#include<iostream>
using namespace std;
class sample
{
static int a;
static int b;
public:
static void print() ;
};
int sample::a=20;
int sample::b=30;
void sample::print() 
{
cout<<"Value of a:"<<a;
cout<<"\nValue of b:"<<b;
}
int main()
{
sample S1;
cout<<"printing through object name\n";
S1. print();
cout<<"\nprinting through class name\n";
sample::print() ;
return 0;
}