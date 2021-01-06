#include<iostream>
using namespace std;
class Grade
{
int percentage;
public: void display() 
{
cout<<"Enter your percentage\n";
cin>>percentage;
if(percentage>=90) 
cout<<"Grade A\n";
else if(percentage<=90&&percentage>=80) 
cout<<"\nGrade B\n";
else if(percentage<=80&&percentage>=60)
cout<<"\nGrade C\n";
else if(percentage<=60&&percentage>=45)
cout<<"\nGrade D\n";
else
cout<<"\nFail\n";
}
};
int main()
{   
Grade obj1;
obj1.display();
return 0;
}