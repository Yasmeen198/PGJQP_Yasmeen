#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter a number\n";
cin>>num;
cout<<"Table of given number is:\n";
 for(int i=1;i<11;i++)
    {
    cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
  cout<<"Table of given number is\n:";     
    return 0;
}