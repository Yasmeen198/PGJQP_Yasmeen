#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter an integer \n";
    cin>>num;
    for(int count=0;count<7;count++) 
    {
    num++;
    }
    cout<<"Integer when incremented by 7:\n"<<num;
    return 0;
}