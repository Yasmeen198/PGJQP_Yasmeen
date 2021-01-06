#include<iostream>
#include<cmath>
using namespace std;
class size_of_dt
{
int a;
float s;
char ch;
double d;
long int l;
short int sh;
long double ld;
signed int si;
unsigned int ui;
signed char sc;
unsigned char uc;
public: void display() 
{
cout<<"Size of float in bytes:\n"<<sizeof(s);
cout<<"\nSize of double in bytes:\n"<<sizeof(d);
cout<<"\nSize of long double in bytes:\n"<<sizeof(ld);
cout<<"\nSize of integer in bytes:\n"<<sizeof(a);
cout<<"\nSize of long int in bytes:\n"<<sizeof(l);
cout<<"\nSize of short int in bytes:\n"<<sizeof(sh);
cout<<"\nSize of signed int in bytes:\n"<<sizeof(si);
cout<<"\nSize of unsigned int in bytes:\n"<<sizeof(ui);
cout<<"\nSize of char in bytes:\n"<<sizeof(ch);
cout<<"\nSize of signed char in bytes:\n"<<sizeof(sc) ;
cout<<"\nSize of unsigned char in bytes:\n"<<sizeof(uc);
}
};
int main()
{   
size_of_dt obj1;
obj1.display();
return 0;
}