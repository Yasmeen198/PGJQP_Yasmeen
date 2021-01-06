#include<iostream>
using namespace std;
int main()
{
int num,result=1;
cout<<"enter a number to find factorial\n";
cin>>num;
 while(num != 0) 
{
result=result*num;
num--;

}
 cout<<"factorial is\n"<<result;
    return 0;
}