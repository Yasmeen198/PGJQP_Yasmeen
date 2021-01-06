#include<iostream>
using namespace std;
class days_of_week
{
int day;
public: void display() 
{
cout<<"Enter day number\n";
cin>>day;
switch(day) 
{
case 1 : cout<<"Monday";break;
case 2 : cout<<"Tuesday";break;
case 3 : cout<<"Wednesday";break;
case 4 : cout<<"Thursday";break;
case 5 : cout<<"Friday";break;
case 6 : cout<<"Saturday";break;
case 7 : cout<<"Sunday";break;
default  : cout<<"only 1 to 7:(";break;
}
}
};

int main()
{   
 days_of_week obj1;
obj1.display();
return 0;
}